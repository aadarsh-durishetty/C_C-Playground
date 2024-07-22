#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter numbers a,b,c \n");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b && a>c)
       printf("greatest: %f",a);
    if (b>a && b>c)
       printf("greatest: %f",b);
    if (c>a && c>b)
       printf("greatest: %f",c);

}