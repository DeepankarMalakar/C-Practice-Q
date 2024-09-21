// 1/1! + 2/2! + 3/3! + .... + n/n!
#include<stdio.h>
void main() {
    int i, n;
    float sum = 0.0;
    int fact = 1;
    printf("Enter the value: \n");
    scanf("%d", &n);
    for (i=1; i<=n ;i++) {
        fact*= i;
        sum = sum + (float)(i/fact);
    }
    printf("Factorial of : %d is %d\n", n,fact);
    printf("Factorial sum : %d is %.4f\n", n,sum);
}