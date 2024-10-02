#include<stdio.h>
#include<stdbool.h>
#define MAX 10

int input(int *pn){
    printf("Enter a number: ");
    scanf("%d", pn);
    if (*pn > MAX) return 0;
    return 1;   
}

void pyramid_of_stars(int n){
    int i, j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= 2*n-1; j++)
        {
            if (j >= n-i+1 && j <= n+i-1)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
    
}

int main(){
    int n;
    while (true)
    {
        if(input(&n))
            pyramid_of_stars(n);
    }
    return 0;
}