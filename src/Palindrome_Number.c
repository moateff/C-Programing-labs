#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *num){
    printf("Enter a number: ");
    scanf("%d", num);
}

void reverse(int num, int *reversed_num){
    int remainder ;
    while(num != 0){
        remainder = num % 10;
        (*reversed_num) = (*reversed_num) * 10 + remainder;
        num /= 10;
    }
}

int palindrome_check(int num){
    int reversed_num = 0;
    reverse(num, &reversed_num);
    if (num == reversed_num)
        return 1;
    return 0;
}

int main(){
    int num;
    while (true)
    {
        input(&num);
        if(palindrome_check(num))
            printf("yes, %d is a palindrome number\n", num);
        else
            printf("no, %d is not a palindrome number\n", num);
    }
    return 0;
}