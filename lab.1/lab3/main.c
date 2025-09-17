#include <stdio.h>

int main() {
    double X1, X2, delta;
    unsigned int N;

    // Input initial values
    printf("Enter starting value X1: ");
    scanf("%lf", &X1);

    printf("Enter ending value X2: ");
    scanf("%lf", &X2);

    printf("Enter step delta: ");
    scanf("%lf", &delta);

    // Validate input
    if (delta <= 0 || X2 < X1) {
        printf("Input error!\n");
        return 1;
    }

    // Calculate number of points
    N = (unsigned int)((X2 - X1) / delta) + 1;

    // Display initial data
    printf("\nInitial data:\n");
    printf("X1 = %.2lf, X2 = %.2lf, delta = %.2lf\n", X1, X2, delta);
    printf("Number of points N = %u\n\n", N);

    // Table header
    printf("+-----+---------+---------+\n");
    printf("|  i  |    x    |  f(x)   |\n");
    printf("+-----+---------+---------+\n");

    double x = X1;
    unsigned int counter = 0;

    for (unsigned int i = 1; i <= N; i++, x += delta) {
        double fx = 2 * x;

        // Print one row of the table
        printf("| %3u | %7.2lf | %7.2lf |\n", i, x, fx);
        printf("+-----+---------+---------+\n");

        counter++;

        // Pause every 10 rows (except at the end)
        if (counter == 10 && i != N) {
            printf("Press Enter to continue...\n");
            getchar(); // consume leftover newline
            getchar(); // wait for Enter
            counter = 0;
        }
    }

    return 0;
}
