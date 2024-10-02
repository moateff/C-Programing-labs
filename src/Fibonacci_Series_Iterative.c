#include<stdio.h>
#include<stdbool.h>

int input(int *n){
    printf("Enter a number: ");
    scanf("%d", n);
    if((*n) < 1) return 0;
    return 1;
}

int fab(int n){ 
    int fab1 = 0, fab2= 1, result;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fab1);
        result = fab1 + fab2;
        fab1 = fab2;
        fab2 = result; 
    }
    printf("\n");
}

int main(){
    int n;
    while (true)
        if(input(&n)) fab(n);
    return 0;
}