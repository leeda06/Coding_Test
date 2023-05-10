#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", a <= b);

	return 0;
}