#include <stdio.h>

int main() {
    int choice1/*,choice2*/;           // ����� ��� ������ �������
    double X1, X2, delta; // ���� ��� ��������� � �����
    //char my_char='a';
    // ���� ����
    printf("Choose input option:\n");
    printf("1 - Enter X1 and X2\n");
    printf("2 - Enter X1, X2, and delta\n");
    printf("Your choice: ");
    scanf("%d", &choice1); // ���������� ������

    if (choice1 == 1) {
        // ������ 1: ����� X1 � X2
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);

        // ���� �������� �������
        printf("You entered X1 = %.2lf and X2 = %.2lf\n", X1, X2);

    } else if (choice1 == 2) {
        // ������ 2: X1, X2 � delta
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);
        printf("Enter delta: ");
        scanf("%lf", &delta);

        // ���� �������� �������
        printf("You entered X1 = %.2lf, X2 = %.2lf, delta = %.2lf\n", X1, X2, delta);

    } else {
        // ����������� ����
        printf("Invalid choice.\n");
    }

    return 0;
}
