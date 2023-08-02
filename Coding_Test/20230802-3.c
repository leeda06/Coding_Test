#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, count = 0, num = 1;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < count + 1; j++) {
			printf("%d", num);
			num++;
		}
		printf("\n");
		count++;
	}
}