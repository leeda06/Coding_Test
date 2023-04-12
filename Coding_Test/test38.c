#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int num1 = 0;
	int num2 = 0;
	printf("첫번째 정수를 적어주세요 : ");
	scanf("%d", &num1);
	printf("두번째 정수를 적어주세요 : ");
	scanf("%d", &num2);
	printf("%s", num1 + num2);
}