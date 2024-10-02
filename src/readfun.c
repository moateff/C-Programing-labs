#include<stdio.h> 

int get_line(char *ptr){
    int ch, n = 0;
    while ((ch = getchar()) != '\n'){
        *(ptr++) = (char)ch;
        n++;
    }
    *ptr = '\0';
    return n;
}

void getn_line(char *ptr, int n){
    int ch;
    while (((ch = getchar()) != '\n'))
        if((n--) > 0) *(ptr++) = (char)ch;
    *ptr = '\0';
}