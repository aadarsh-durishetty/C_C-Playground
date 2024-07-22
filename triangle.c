#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides a,b,c \n");
    scanf("%d%d%d",&a,&b,&c);

    if ((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b))
       printf("right angle triangle \n");
    if (a!=b && b!=c)
       printf("scalene triangle");  
    if (a==b || a==c || b==c)
       printf("equilateral triangle");
    if (a==b && b==c)
       printf("isosceles triangle");
      
}