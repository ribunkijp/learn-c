#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>  // strtolを使うために必要
#include <limits.h>
#include<stdint.h>

void swap(int *x, int *y) {
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}

int main(void) {

	int a = 1, b = 2;
	
	swap(&a, &b);
	
	printf("%d %d", a, b);

	
	return 0;
}
