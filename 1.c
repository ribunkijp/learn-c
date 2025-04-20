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