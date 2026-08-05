#include <stdio.h>

int main() 
{
    float r,h,sa,v;
    printf("enter radius and height:");
    scanf("%f %f",&r,&h);
    sa=2*3.14*r*h+2*3.14*r*r;
    v=3.14*r*r*h;
    printf("surface area: %f\n",sa);
    printf("volume: %f\n",v);
    return 0;
}