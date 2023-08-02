#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
RE:
	scanf("%d", &a);

	if (a == 0) {
		return 0;
	}

	printf("%d\n", a);
	goto RE;
	return 0;
}