#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>  // strtolを使うために必要
#include <limits.h>
#include<stdint.h>
#include<stdarg.h>

void swap(int *x, int *y) {
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}void ww(int a);
void (*ww1)(int) = ww;

int main(void) {

	/*int a = 1, b = 2;

	swap(&a, &b);

	printf("%d %d", a, b);*/

	/*int b = 5;
	int* a = &b;
	
	printf("%d", *a);*/
	(*ww1)(10);

	
	return 0;
}

void ww(int a) {
	printf("%d", a);
}