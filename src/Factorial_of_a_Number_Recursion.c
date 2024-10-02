#include<stdio.h>
#include<stdbool.h>

int input(int *n){
    printf("Enter a number: ");
    scanf("%d", n);
    if((*n) < 0) return 0;
    return 1;
}

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    while (true)
        if(input(&n)) printf("factorial of %d equals %d\n", n, fact(n));
    return 0;
}