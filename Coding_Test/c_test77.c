#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	char a;
	scanf("%c", &a);
	for (int i = a; i >= 'a'; i--) {
		printf("%c\n", a);
		a--;
	}
	return 0;
}