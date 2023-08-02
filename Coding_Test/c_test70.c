#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 12:
		printf("12, ");
	case 1:
		printf("1, ");
	case 2:
		printf("2");
		break;
	case 3:
		printf("3, ");
	case 4:
		printf("4, ");
	case 5:
		printf("5");
		break;
	case 6:
		printf("6, ");
	case 7:
		printf("7, ");
	case 8:
		printf("8");
		break;
	case 9:
		printf("9, ");
	case 10:
		printf("10, ");
	case 11:
		printf("11");
		break;
	default:
		printf("What?!!");
		break;
	}
	return 0;
}