#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;
    char ch1;

    // �Է� �ޱ�
    printf("���� ����, *�� ����, ����(L �Ǵ� R)�� �Է��ϼ���: ");
    scanf("%d %d %c", &num1, &num2, &ch1);

    // ����ϱ�
    for (int i = 0; i < num1; i++) {
        // ���� ������ ���
        if (ch1 == 'L') {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < num2; j++) {
                printf("*");
            }
        }
        // ������ ������ ���
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
