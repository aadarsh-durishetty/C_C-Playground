#include <stdio.h>
int fact(int n)
{
    int i;
    int factorial=1;
    for (i=1;i<=n;i++)
       factorial=factorial*i;
    return factorial;
}
int main()
{
int n;
long factorial;
printf("enter a number \n");
scanf("%d",&n);
factorial= fact(n);
printf("factorial of %d: %ld\n",n,factorial);
}

