#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int sum_method1(int, int);
int sum_method2(int, int);

void input(int *num1, int *num2){
    printf("Enter the two numbers: ");
    scanf("%d %d", num1, num2);
}

int sum_method1(int num1, int num2){
    if(num2 > 0){
        while (num2 != 0)
        {
            num1++;
            num2--;
        }
    }
    else{
        while (num2 != 0)
        {
        num1--;
        num2++; 
        }
    }
    return num1;
}

int sum_method2(int num1, int num2){
    int sum, carry;
    while(num2 != 0){
        sum = num1 ^ num2;
        carry = (num1 & num2) << 1;
        num1 = sum;
        num2 = carry;
    }
    return sum;
}

int main(){
    int num1, num2;
    while (true)
    {
        input(&num1, &num2);
        printf("sum of %d + %d is %d\n", num1, num2, sum_method2(num1,num2));
    }
    return 0;
}