#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("�� : %d\n", a + b + c);
	printf("��� : %.1lf\n", (float)(a + b + c)/ 3);

	return 0;
}