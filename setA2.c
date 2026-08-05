#include <stdio.h>
int main()
{
    float f,c,k;
    printf("enter tem in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    k=c+273.15;
    printf("celsius: %f\n",c);
    printf("kelvin: %f\n",k);
    return 0;
}