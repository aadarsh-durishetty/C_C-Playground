#include <stdio.h>
int main()
{
    float money,cost; // money= money in hand, cost= cost per choco
    int n,w,f,total; // n= no of choco, w= no of wrappers for 1 free choco, f= no of free choco
    printf("enter money,cost,wrapper \n");
    scanf("%f%f%d",&money,&cost,&w);

    n= (int) (money/cost);
    f= (int) (n/w);
    total= n+f;
    printf("total no of chocolates : %d",total);

}