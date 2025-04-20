#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>  // strtolを使うために必要


//int binary_to_decimal(const char* binary) {
//    int decimal = 0;
//    int length = strlen(binary);  // 文字列の長さを取得
//
//    // 文字列を1ビットずつ評価して10進数に変換
//    for (int i = 0; i < length; i++) {
//        if (binary[i] == '1') {
//            decimal += pow(2, length - i - 1);  // 2のべき乗を加算
//        }
//    }
//
//    return decimal;
//}
//
//int main() {
//    const char* binary = "101000";  // 2進数の文字列
//    int decimal = binary_to_decimal(binary);  // 10進数に変換
//
//    printf("2進数 %s は 10進数 %d です。\n", binary, decimal);
//    int a = 21;
//
//
//    return 0;
//}

void decimal_to_binary(int n) {
	if (n > 1) {
		decimal_to_binary(n / 2);  // 再帰的に2で割り続ける
	}
	printf("%d", ~n % 2);  // 余りを表示（最下位ビットから順に表示される）
}

int main(void) {
	


	
	/*unsigned int num = 10;
	
	decimal_to_binary(num);*/


	
		/*unsigned char num = 10;
		unsigned int result = ~num & 0x0F;

		printf("元の値: %u\n", num);
		printf("反転後: %u\n", result);*/
	const char* str_val = "0010";
	unsigned long int dev_val = strtol(str_val, NULL, 2);
	dev_val = ~dev_val & 0x0F;
	dev_val = dev_val & 10;
	printf("%lu\n", dev_val);

	return 0;
	
	
	//printf("%d", num);
	
	//decimal_to_binary(num);
	/*num = ~num;
	printf(num);*/
	
	return 0;
	
}
//void hex_to_binary(unsigned int hex) {
//    // 32ビットとして表示（上位ビットから）
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (hex >> i) & 1);
//        if (i % 4 == 0) printf(" ");  // 見やすいように4ビットごとにスペース
//    }
//    printf("\n");
//}
//
//int main(void) {
//    unsigned int hex_value = 0x1A3;  // 例: 16進数の1A3（=10進数419）
//    printf("Hex: 0x%X\n", hex_value);
//    printf("Binary: ");
//    hex_to_binary(hex_value);
//    return 0;
//}