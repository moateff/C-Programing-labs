#include<stdio.h>
#include<stdbool.h>
#define MAX 10

int input(int *pn){
    printf("Enter a number: ");
    scanf("%d", pn);
    if (*pn > MAX) return 0;
    return 1;   
}

void triangle(int n){
    int count = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
int main(){
    int n;
    while (true)
    {
        if(input(&n)) triangle(n);
    }
    return 0;
}