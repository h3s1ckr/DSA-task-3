
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void displaySeries(int n, int i) {
    if (i == n)
        return;

    printf("%d ", fibonacci(i));
    displaySeries(n, i + 1);
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1 || n > 40) {
        printf("Enter a number between 1 and 40.\n");
    } else {
        printf("Fibonacci Series: ");
        displaySeries(n, 0);
        printf("\n");
    }

    return 0;
}
