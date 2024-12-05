#include <stdio.h>
#include <string.h>


int isVowel(char ch){
    char vowels[] = "aoiueAOIUE";
    return (strchr(vowels, ch) != NULL);
}

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);
    if (isVowel(ch)){
        printf("%c is a vowel", ch);
    } else {
        printf("%c is not a vowel", ch);
    }
    
    return 0;
}