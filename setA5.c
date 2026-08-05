#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("privious character = %c\n",a-1);
    printf("Next character = %c\n",a+1);
    return 0;
}