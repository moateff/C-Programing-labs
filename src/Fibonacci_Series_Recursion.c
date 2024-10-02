#include<stdio.h>
#include<stdbool.h>

void input(int *n){
    printf("Enter a number: ");
    scanf("%d", n);
}

int fab(int n){ 
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fab(n-1) + fab(n-2);
}

int main(){
    int n;
    while (true)
    {
        input(&n);
        for (int i = 1; i <= n; printf("%d ", fab(i)), i++);
        printf("\n");
    }
    return 0;
}