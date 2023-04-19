#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("ÇÕ : %d\n", a + b);
	printf("Â÷ : %d\n", a - b);
	printf("°ö : %d\n", a * b);
	printf("³ª´« : %.2lf\n", (float)a / (float)b);
	printf("³ª¸ÓÁö : %d\n", a % b);

	return 0;
}