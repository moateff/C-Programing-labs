#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *num){
    printf("Enter a number: ");
    scanf("%d", num);
}

int fact(int i){
    if(i == 0) return 1;
    return i * fact(i-1);
}

void calc(int num, int *result){
    int remainder;
    while(num != 0){
        remainder = num % 10;
        (*result) += fact(remainder);
        num /= 10;
    }
}

int strong_check(int num){
    int result = 0;
    calc(num, &result);
    if (num == result)
        return 1;
    return 0;
}

int main(){
    int num;
    while (true)
    {
        input(&num);
        if(strong_check(num))
            printf("yes, %d is a strong number\n", num);
        else
            printf("no, %d is not a stronge number\n", num);
    }
    return 0;
}