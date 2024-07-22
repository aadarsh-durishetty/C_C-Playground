/*#include <stdio.h>
int main()
{
    int i=1,j=1;
    while(i++<=5)
    {
        while(j++<=5)
        {
            if (j==3)
            break;
            else 
            printf("%d %d",i,j);
        }
    }
}*/

#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            if(i==j)
            continue;
            printf("%d %d",i,j);
        }
    }
}