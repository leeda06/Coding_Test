#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, sum = 0;
	scanf("%d", &a);
	for (int i = 1; i > a; i++) {
		sum += a;
	}
	printf("%d", sum);
	return 0;
} 