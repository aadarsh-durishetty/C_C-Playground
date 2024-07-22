#include <stdio.h>
int shift(int a, int b, int c);
int main()
{
    int x,y,z;
    printf("enter 3 values \n");
    scanf("%d%d%d",&x,&y,&z);
    shift(x,y,z);
}
int shift(int a, int b, int c)
{
    int temp;
    temp=c;
    c=b;
    b=a;
    a=temp;

    printf("x:%d\ny:%d\nz:%d\n",a,b,c);
}
