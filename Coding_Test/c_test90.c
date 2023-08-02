#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, r, n;
	scanf("%d %d %d", &a, &r, &n);
	for (int i = 1; i < r; i++) {
		if (n == i) {
			printf("%d", i);
		}
	}
	return 0;
}