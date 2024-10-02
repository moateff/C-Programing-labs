#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *num){
    printf("Enter a number: ");
    scanf("%d", num);
}

void number_of_digits(int num, int *count){
    while(num != 0){
        num /= 10;
        (*count)++;
    }
}

void calc(int num,  int count, int *result){
    int remainder;
    while(num != 0){
        remainder = num % 10;
        (*result) += pow(remainder, count);
        num /= 10;
    }
}

int armstrong_check(int num){
    int result = 0, count = 0;
    number_of_digits(num, &count);
    calc(num, count, &result);
    if (num == result)
        return 1;
    return 0;
}

int main(){
    int num;
    while (true)
    {
        input(&num);
        if(armstrong_check(num))
            printf("yes, %d is an armstrong number\n", num);
        else
            printf("no, %d is not an armstrong number\n", num);
    }
    return 0;
}