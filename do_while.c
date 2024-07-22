#include <stdio.h>
int main()
{
    int sum,n,i=0;
    printf("enter the number \n");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i=i+1;
    }while(i<=n);
    printf("sum: %d",sum);


}