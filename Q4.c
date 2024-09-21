// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and
// average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>

int main() {
    int i, sum = 0, n, num;

    printf("Test Data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter %d number: ", i);
        scanf("%d", &num);
        sum += num;
    }

    double avg = (double)sum / n;

    printf("The sum of 10 no is: %d\n", sum);
    printf("The Average is: %.2f\n", avg);

    return 0;
}