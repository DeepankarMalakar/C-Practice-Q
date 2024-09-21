// 3. Write a program in C to display n terms of natural numbers and their sum. 
// Test Data : 7 
// Expected Output : 
// The first 7 natural number is : 
// 1 2 3 4 5 6 7 
// The Sum of Natural Number upto 7 terms : 28 

#include<stdio.h>
void main() {
    int i, sum = 0, n;
    
    printf("Test Data: ");
    scanf("%d", &n);
    printf("The first %d natural number is: ", n);

    for (i = 1; i <= n; i++) {
        printf("%d" " ", i);
        sum+=i;
    }
    printf("\nThe Sum of natural numbers upto %d terms: %d", n, sum);
}