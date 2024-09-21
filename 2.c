// Factorial
#include<stdio.h>
void main() {
    int i, n;
    int fact = 1;
    printf("Enter the value: \n");
    scanf("%d", &n);
    for (i=1; i<=n ;i++) {
        fact*= i;
    }
    printf("Factorial of : %d is %d", n,fact);
}