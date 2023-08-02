#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;

    printf("가로 길이와 반복 횟수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    for (int n = 0; n < b; n++) {
        // 화살표 윗부분
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*\n");
        }

        // 화살표 아랫부분
        for (int i = a - 1; i >= 1; i--) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
