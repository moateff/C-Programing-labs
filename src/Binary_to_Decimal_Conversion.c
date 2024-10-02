#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *num){
    printf("Enter a binary number: ");
    scanf("%d", num);
}

int binary_check(int binary){
    int rem;
    for(int i = 0; binary != 0; i++){
        rem = binary % 10;
        if(!(rem == 0 || rem == 1)) return 0;
        binary /= 10;
    }
    return 1;
}

int decimal_conversion(int binary){
    int decimal = 0, rem;
    for(int i = 0; binary != 0; i++){
        rem = binary % 10;
        decimal += rem * pow(2,i);
        binary /= 10;
    }
    return decimal;
}

int main(){
    int binary;
    while (true)
    {
        input(&binary);
        if (binary_check(binary))
            printf("Decimal equivalent of the binary number %d is %d\n", binary, decimal_conversion(binary));
    }
    return 0;
}