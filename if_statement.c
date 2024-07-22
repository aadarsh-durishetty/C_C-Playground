#include <stdio.h>
int main()
{
    int a,b,c,d;
    float ratio;
    printf("\n enter the four integer values \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (c-d!=0)
    {
        ratio= (float)(a+b) / (float)(c-d);
        printf("ratio = %f",ratio);
    }
    else 
    {
        printf("condition is not satisfied");
    }
}
