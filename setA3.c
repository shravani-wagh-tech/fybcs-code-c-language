#include <stdio.h>
int main()
{
    float u,a,t,v, s;
    printf("Enter the initial velocity (u): ");
    scanf("%f %f %f",&u,&a,&t);
    v=u+a*t;
    printf("The final velocity (v) is: %f\n",v);
    s=u*t+0.5*a*t*t;
    printf("distance=%f",s);
    return 0;
}