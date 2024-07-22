#include <stdio.h>
int main()
{
    int qty,dis=0;
    float rate,total;
    printf("enter the quatity and rate \n");
    scanf("%d %f",&qty,&rate);
    if (qty>1000)
       dis=10;
    total=(qty*rate)-(qty*rate*dis/100);
    printf("total expenses = Rs. %f",total);

}
