#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("%d\n", a);
		scanf("%d", &a);
	}
	printf("%d\n", a);
	return 0;
}