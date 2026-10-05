#include<stdio.h>
// int sum(int n) {
//     if (n == 1) {
//         return 1;
//     } else {
//         return n + sum(n - 1);          // sum of n natural number
//     }
// }
// void main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("Sum of first %d natural numbers is: %d\n", n, sum(n));

//---------------------------------------------------------------------
   int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);           // factorial of n numbers
    }
}
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, factorial(n));
    
}
