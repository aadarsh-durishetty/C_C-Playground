#include <stdio.h>
int main()
{
    char op;
    int n;
    do
    {
        printf("enter number n \n");
        scanf("%d",&n);
        printf("square of %d : %d \n",n,n*n);
        printf("y: to repeat; n: to stop \n");
        scanf("%s",&op);
    }while(op=='y');
    return 0;
}


