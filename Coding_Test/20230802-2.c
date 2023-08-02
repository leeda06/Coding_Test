#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	int count = a;

	for (int i = 0; i < a; i++) {
		for (int j = 1; j < count + 1; j++) {
			printf("%d", count);
		}
		printf("\n");
		count--;
	}
}