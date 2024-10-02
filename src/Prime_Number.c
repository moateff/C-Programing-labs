#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *num){
    printf("Enter a number: ");
    scanf("%d", num);
}

int calc(int num, int *val){
    for(int i = 2; i <= (*val); i++)
        if(num % i == 0) return 0;
    return 1;
}

int prime_check(int num){
    if (num == 1) return 0;
    if (num == 2) return 1;
    int val = ceil(sqrt(num));
    return calc(num, &val);
}

int main(){
    int num;
    while (true)
    {
        input(&num);
        if(prime_check(num))
            printf("yes, %d is a prime number\n", num);
        else
            printf("no, %d is not a prime number\n", num);
    }
    return 0;
}