// 2. Write a C program to compute the sum of the first 10 natural numbers. 
// Expected Output : 
// The first 10 natural number is : 
// 1 2 3 4 5 6 7 8 9 10 
// The Sum is : 55

#include<stdio.h>
void main() {
    int i, n = 10, sum = 0;
    for (i  = 1; i <= n; i++) {
        sum+=i;
    }
    printf("%d", sum);
}