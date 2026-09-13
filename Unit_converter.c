#include <stdio.h>

int main() 
{
    float F , C;
    printf("Enter temperature  in Fahrenheit: \n");
    scanf("%f",&F);
    C = (F - 32) * 5/9;
    printf("--- Conversion Result --- \n");
    printf("Fahrenheit : %.2f F \n",F);
    printf("Celsius: %.2f C",C);
    return 0;
}
