#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int one = 0, two = 0;
	scanf("%d %d", &one, &two);
	printf("%d", (one % two));

	return 0;
}