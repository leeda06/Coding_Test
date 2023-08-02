#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a,&b, &c);
	if (a % 2 == 0) {
		printf("%d", a);
	}
	if (b % 2 == 0) {
		printf("%d", b);
	}
	if (c % 2 == 0) {
		printf("%d", c);
	}

	return 0;
}