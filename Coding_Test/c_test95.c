#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a[100], n, min = 21;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}