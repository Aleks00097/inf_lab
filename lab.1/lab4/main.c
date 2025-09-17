#include <stdio.h>

int main() {
    int choice1/*,choice2*/;           // Змінна для вибору варіанту
    double X1, X2, delta; // Змінні для аргументів і кроку
    //char my_char='a';
    // Вивід меню
    printf("Choose input option:\n");
    printf("1 - Enter X1 and X2\n");
    printf("2 - Enter X1, X2, and delta\n");
    printf("Your choice: ");
    scanf("%d", &choice1); // Зчитування вибору

    if (choice1 == 1) {
        // Варіант 1: тільки X1 і X2
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);

        // Вивід введених значень
        printf("You entered X1 = %.2lf and X2 = %.2lf\n", X1, X2);

    } else if (choice1 == 2) {
        // Варіант 2: X1, X2 і delta
        printf("Enter X1: ");
        scanf("%lf", &X1);
        printf("Enter X2: ");
        scanf("%lf", &X2);
        printf("Enter delta: ");
        scanf("%lf", &delta);

        // Вивід введених значень
        printf("You entered X1 = %.2lf, X2 = %.2lf, delta = %.2lf\n", X1, X2, delta);

    } else {
        // Некоректний вибір
        printf("Invalid choice.\n");
    }

    return 0;
}
