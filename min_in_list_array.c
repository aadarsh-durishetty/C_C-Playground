#include <stdio.h>
int main()
{
    int list[10]={2,56,34,66,23,44,89,12,33,45};
    int i,min,max;
    min=list[0];
    max=list[0];
    for (i=1;i<=10;i++)
        if (list[i]<min)
           min=list[i];
    for (i=1;i<=10;i++)
        if (list[i]>max)
           max=list[i];
    
    printf("min: %d and max: %d",min,max);
        
           

}