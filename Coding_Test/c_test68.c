#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("¦��, ");
		if (a > 0) {
			printf("��� %d", a);
		}
		else {
			printf("���� %d", a);
		}
	}
	else {
		printf("Ȧ��, ");
		if (a >= 0) {
			printf("��� %d", a);
		}
		else {
			printf("���� %d", a);
		}
	}


	return 0;
}