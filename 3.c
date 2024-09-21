// 1! + 2! + 3! + .... + n!
#include<stdio.h>
void main() {
    int i, n, sum = 0;
    int fact = 1;
    printf("Enter the value: \n");
    scanf("%d", &n);
    for (i=1; i<=n ;i++) {
        fact*= i;
        sum = sum + fact;
    }
    printf("Factorial of : %d is %d\n", n,fact);
    printf("Factorial sum : %d is %d", n,sum);
}