#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;

    printf("���� ���̿� �ݺ� Ƚ���� �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    for (int n = 0; n < b; n++) {
        // ȭ��ǥ ���κ�
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*\n");
        }

        // ȭ��ǥ �Ʒ��κ�
        for (int i = a - 1; i >= 1; i--) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
