#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int input(int *base, int *expo){
    printf("Enter the base: ");
    scanf("%d", base);
    printf("Enter the exponant: ");
    scanf("%d", expo);
    if (*expo >= 0) return 1;
    return 0; 
}

double power(int base, int expo){
    double result = 1.0;
    if(expo > 0){
        while (expo != 0){
            result *= base;
            expo --;
        }
    }
    else if(expo < 0){
        while (expo != 0){
            result *= (1.0 / base);
            expo ++;
        }
    }
    return result;
}

int main(){
    int base, expo;
    while (true){
        if(input(&base, &expo))
            printf("%d to the power of %d equals %d\n", base, expo, (int)power(base, expo));
        else
            printf("%d to the power of %d equals %0.5f\n", base, expo, power(base, expo));
    }
    return 0;
}