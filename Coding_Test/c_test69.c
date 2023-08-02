#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	char a;
	scanf("%c", &a);
	switch (a)
	{
	case 'A':
		printf("Best!!!");
		break;
	case 'B':
		printf("Good!!!");
		break;
	case 'C':
		printf("Run!!!");
		break;
	case 'D':
		printf("Slowly!!!");
		break;
	default:
		printf("What?!!");
		break;
	}
	return 0;
}