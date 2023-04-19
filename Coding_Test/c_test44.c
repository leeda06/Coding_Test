#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int one = 0;
	scanf("%d", &one);
	printf("%d", ++one);

	// printf("%d", one++); // 출력이 되고 더함

	return 0;
}