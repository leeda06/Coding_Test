#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int one = 0, two = 0;
	scanf("%d %d", &one, &two);
	printf("%f", ((float)one / (float)two));

	return 0;
}