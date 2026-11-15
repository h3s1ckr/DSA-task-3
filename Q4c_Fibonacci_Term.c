
#include <stdio.h>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the position: ");
    scanf("%d", &n);

    if (n < 1 || n > 40) {
        printf("Enter a position between 1 and 40.\n");
    } else {
        printf("Fibonacci term %d = %d\n",
               n, fibonacci(n));
    }

    return 0;
}
