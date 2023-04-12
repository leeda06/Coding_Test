#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int  num = 0;
	printf("10진수를 적어주세요 : ");
	scanf("%d", &num);
	printf("%X", num);	//	16진수 대문자
}