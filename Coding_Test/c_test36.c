#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	char num = "";
	printf("아스키코드를 적어주세요 : ");
	scanf("%s", &num);
	printf("%o", num);	//	10진수
}