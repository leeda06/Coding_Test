#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("礎熱, ");
		if (a > 0) {
			printf("曄熱 %d", a);
		}
		else {
			printf("擠熱 %d", a);
		}
	}
	else {
		printf("�汝�, ");
		if (a >= 0) {
			printf("曄熱 %d", a);
		}
		else {
			printf("擠熱 %d", a);
		}
	}


	return 0;
}