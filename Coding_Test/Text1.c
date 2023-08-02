#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;
    char ch1;

    // 입력 받기
    printf("줄의 개수, *의 개수, 방향(L 또는 R)을 입력하세요: ");
    scanf("%d %d %c", &num1, &num2, &ch1);

    // 출력하기
    for (int i = 0; i < num1; i++) {
        // 왼쪽 방향인 경우
        if (ch1 == 'L') {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < num2; j++) {
                printf("*");
            }
        }
        // 오른쪽 방향인 경우
        else if (ch1 == 'R') {
            for (int j = 0; j < num1 - i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < num2; j++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
