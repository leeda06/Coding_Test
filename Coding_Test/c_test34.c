#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int  num = 0;
	printf("8진수를 적어주세요 : ");
	scanf("%o", &num);
	printf("%d", num);	//	10진수
}