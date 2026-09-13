#include <stdio.h>

int main() 
{
    float s,t,d,M,CM,MM;
    printf("Enter speed in km/h: \n");
    scanf("%f",&s);
    printf("Enter time in hours: \n");
    scanf("%f",&t);
    d = s*t;
    M = d* 1000;
    CM = d* 100000;
    MM = d* 1000000;
    printf("--- Conversion Results ---\n");
    printf("Distance in Meters: %.2f m \n",M);
    printf("Distance in Centimetres: %.2f cm \n",CM);
    printf("Distance in Millimetres: %.2f mm", MM); 
    return 0;
}
