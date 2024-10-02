#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void input(int *n){
    printf("Enter a number: ");
    scanf("%d", n);
}

void calc(int n, int seen[]){
    int rem;
    while(n != 0){
        rem = n % 10;
        seen[rem]++;
        n /= 10;
    }
}

void clear(int seen[]){
    for(int i = 0; i < 10; i++) seen[i] = 0;
}

int main(){
    int n, count = 0, seen[10] = {0};
    while (true)
    {
        input(&n);
        calc(n, seen);
        for (int i = 0; i < 10; i++){
            if(seen[i] > 1){
                printf("%d appears %d times\n", i, seen[i]);
                count++;
            }
        }
        if(count == 0) printf("No repeated digits\n");
        clear(seen);
        count = 0;
    }
    return 0;
}