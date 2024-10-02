#include<stdio.h>
#include<stdbool.h>

void input(int arr[], int n){
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void reverse(int arr[], int reversed_arr[], int n){
    for (int i = 0; i < n; i++)
        reversed_arr[i] = arr[n-1-i];
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int n;
    while (true)
    {
        printf("Enter number of elements to be reversed: ");
        scanf("%d", &n);
        int arr[n], reversed_arr[n];
        input(arr, n);
        reverse(arr, reversed_arr, n);
        print(reversed_arr, n);
    }
}