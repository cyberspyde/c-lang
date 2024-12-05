#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct teacher 
{
    char name[10];
    char email[20];
    int phone_number;
    bool hasRetired;
};

int main()
{
    struct teacher Aziza = {"Aziza", "cyberspyde@gmail.com", 2121440, false};

    printf("%s\n", Aziza.email);
    printf("%d\n", Aziza.phone_number);
    printf("%s\n", Aziza.name);
    printf("%s", Aziza.hasRetired ? "True" : "False");
    return 0;
}