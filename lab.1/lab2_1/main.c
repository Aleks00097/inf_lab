#include <stdio.h>

int main() {              // ���������� ������� �������
    int choice1;          // �������� ����� ,�� ������� ��� �����
    double X1, X2, delta; // ���� ��� ����������� ��������, �������� �������� �� �����

                                         // �������� ���� ��� ������ ������� ��������
    printf("Choose input option:\n");
    printf("1 - Enter X1 and X2 only\n");           // ������ 1: ����� X1 � X2
    printf("2 - Enter X1, X2, and delta\n");        // ������ 2: X1, X2 � delta
    printf("Your choice: ");
    scanf("%d", &choice1 );                         // ������� ���� �����������

    if (choice1 == 1) {
                                                    // ������� ������� 1: ������� X1 � X2
        printf("Enter starting value X1: ");
        scanf("%lf", &X1);                          // ������� X1
        printf("Enter ending value X2: ");
        scanf("%lf", &X2);                          // ������� X2

        // �������� ������ ��������
        printf("\nYou entered:\n");
        printf("X1 = %.2lf\n", X1);
        printf("X2 = %.2lf\n", X2);

        // ��� ����� ������ ���������� ��� �������� �������

    } else if (choice1 == 2) {
        // ������� ������� 2: ������� X1, X2 � delta
        printf("Enter starting value X1: ");
        scanf("%lf", &X1);                          // ������� X1
        printf("Enter ending value X2: ");
        scanf("%lf", &X2);                          // ������� X2
        printf("Enter step delta: ");
        scanf("%lf", &delta);                       // ������� delta

        // �������� ������ ��������
        printf("\nYou entered:\n");
        printf("X1 = %.2lf\n", X1);
        printf("X2 = %.2lf\n", X2);
        printf("Delta = %.2lf\n", delta);

        // ��� ����� ��������� ������� ����� ��� ���������� �������

    } else {
        // ���� ���� ����������� � ��������� ��������
        printf("Invalid choice. Program terminated.\n");
        return 1;
    }

    return 0; // ���������� ��������
}

