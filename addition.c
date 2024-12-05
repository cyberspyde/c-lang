#include <stdio.h>

float addition(float a, float b){
    float sum = a + b;
    return sum;
}

int main()
{
    float a = 5.12, b = 12.54;
    float c = addition(a, b);

    printf("%.2f", c);
    return 0;
}