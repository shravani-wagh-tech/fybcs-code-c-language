#include <stdio.h>
int main()
{
    int amount,n10,n5,n1;
    printf("enter amount: ");
    scanf("%d",&amount);
    n10=amount/10;
    n5=(amount%10)/5;
    n1=(amount%10)%5;
    printf("number of 10 rupee notes = %d\n",n10);
    printf("number of 5 rupee notes = %d\n",n5);
    printf("number of 1 rupee coins = %d\n",n1);
    return 0;
}