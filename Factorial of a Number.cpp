/*Write a program to find the factorial of a number.
Factorial of n is:
n! = n * (n-1) * (n-2) * (n-3)....* 1
Note: Factorial of a negative number doesn't exist. And factorial of 0 is 1.*/

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
   // printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%llu", fact);
    }

    return 0;
}
