#include<stdio.h>
//    int Fibonacci(int n) {
//     if (n <= 1) 
//         return n;
//      else 
//         return Fibonacci(n - 1) + Fibonacci(n - 2); // Fibonacci series   
// }
//    void main() {
//     int n ;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Fibonacci of %d is: %d\n", n, Fibonacci(n));

//    }

//------------------------------------------------------------------
int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d , ", next);
    }

    return 0;
}
     