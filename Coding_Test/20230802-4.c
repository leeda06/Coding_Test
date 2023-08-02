#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, num = 0;
	scanf("%d ", &a);

	for (int i = 0; i < a; i++) {
		num += i + 1;
	}

	
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d", num);
			num--;
		}
		printf("\n");
	}
}