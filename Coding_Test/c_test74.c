#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	while (a != 0) {
		printf("%d\n", a);
		a--;
	}
	return 0;
}