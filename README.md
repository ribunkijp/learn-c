# learn-c

### 10進数 to 2進数

```c
#include <stdio.h>

void decimal_to_binary(int n) {
	if (n > 1) {
		decimal_to_binary(n / 2);  // 再帰的に2で割り続ける
	}
	printf("%d", n % 2);  // 余りを表示（最下位ビットから順に表示される）
}

int main(void) {
	


	
	unsigned int num = 123;
	decimal_to_binary(123);
	
	return 0;
	
}
```

### 2進数 to 10進数

```c
#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);  // 文字列の長さを取得

    // 文字列を1ビットずつ評価して10進数に変換
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);  // 2のべき乗を加算
        }
    }
    
    return decimal;
}

int main() {
    const char *binary = "101101";  // 2進数の文字列
    int decimal = binary_to_decimal(binary);  // 10進数に変換

    printf("2進数 %s は 10進数 %d です。\n", binary, decimal);

    return 0;
}
```

###  char  0x0F

```c
const char* str_val = "1011";
unsigned long int dev_val = strtol(str_val, NULL, 2);
dev_val = ~dev_val & 0x0F;
printf("%lu\n", dev_val);
```

### &age アドレス

```c
int age;
char name[50];

printf("名前を入力してください：");
scanf(" %s", name);
printf("年齢を入力してください：");
scanf("%d", &age);//ageじゃなく、&age(アドレス)
printf("こんにちは、%sさん\n、%d歳", name, ag、e);
```

### goto scanf

```c
	int age;
	char name[50];
	
start:

	printf("名前を入力してください：");
	scanf(" %s", name);
	printf("年齢を入力してください：");
	scanf("%d", &age);
	if (age >= 30) goto start;
	printf("こんにちは、%sさん\n、%d歳", name, age);

```

