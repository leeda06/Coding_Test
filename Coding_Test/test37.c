#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int num = 0;
	printf("정수를 적어주세요 (0~255) : ");
	scanf("%d", &num);
	printf("%s", num);	//	아스키
}