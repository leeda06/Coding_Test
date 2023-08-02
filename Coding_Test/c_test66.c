#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a[4];
	int odd[4];
	int even[4];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for (int i = 0; i < 3; i++) {
		if (a[i] % 2 == 0) {
			even[i] += a[i];
			printf("Â¦¼ö %d", a[i]);
		}
		else {
			odd[i] += a[i];
			printf("È¦¼ö %d", a[i]);
		}
	}
	return 0;
}