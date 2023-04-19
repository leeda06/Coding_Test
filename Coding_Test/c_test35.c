#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int  num = 0;
	printf("16진수를 적어주세요 : ");
	scanf("%X", &num);
	printf("%o", num);	//	10진수
}