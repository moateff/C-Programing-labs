#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include"readfun.h"

int main(){
    char *str = (char*) malloc(sizeof(char));
    int n;
    while (true){
        //get_line(str);
        getn_line(str, 5);
        puts(str);
    }
    return 0;
}
