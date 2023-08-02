#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	char a;
	scanf("%c", &a);
	while (a >= 'a') {
		printf("%c\n", a);
		a--;
	}
	return 0;
}