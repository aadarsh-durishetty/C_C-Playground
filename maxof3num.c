#include <stdio.h>
int main()
{
    char max;
    int n1,n2,n3;
    printf("enter three numbers \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    max=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("the maximum number: %d",max);
}
