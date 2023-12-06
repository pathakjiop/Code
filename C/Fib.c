#include <stdio.h>

void fibonacci(int n){
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci Series:-- ");

    for (int i = 0; i < n; i++){
        printf("%d, ", fib[i]);
    }
}

int main(){
    int n;

    printf("Enter the no. upto where you want to print Fibonacci Series:- ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}