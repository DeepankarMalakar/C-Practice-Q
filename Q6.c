// 6. Write a program in C to display the multiplication table for a given integer. 
// Test Data : 
// Input the number (Table to be calculated) : 15 
// Expected Output : 
// 15 X 1 = 15 
// ... 
// ... 
// 15 X 10 = 150

#include<stdio.h>

void main() {
    int i, table = 10, n;
    printf("Enter the table number you wanted: \n");
    scanf("%d", &n);

    for(i = 1; i <= table; i++) {
        int multiplication = (n * i);
        printf("%d x %d = %d \n", n, i, multiplication);
    }
}