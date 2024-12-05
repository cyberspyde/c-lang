#include <stdio.h>
#include <string.h>

int findLen(char *s){

    int c = 0;

    while(*s++){
        c++;
    }

    return c;
}


int main(){
    char s[] = "Ilhom";
    printf("%d\n", findLen(s));
    printf("%lu", strlen(s));
    return 0;
}