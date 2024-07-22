#include <stdio.h>
int main()
{
    int a;
    printf("enter an integer \n");
    scanf("%d", &a);
    if (a%2==0)
    {
       printf("the number %d is even",a);
    }
    else
    {
       printf("the number %d is odd",a);
    }
}

