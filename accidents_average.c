#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int diff,acc[5],i,sum=0,avg;
    for (i=0;i<=4;i++){
       printf("enter no of accident on day %d \n",i+1);
       scanf("%d",&acc[i]);
    }
    for (i=0;i<=4;i++){
       sum=sum+acc[i];
    }
    avg=sum/5;
    printf("average accidents: %d \n",avg);

    for (i=0;i<=4;i++){
        diff=fabs(avg-acc[i]);
        printf("difference of day %d: %d \n",i+1,diff);
    }

    
    

}