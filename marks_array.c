#include <stdio.h>
int main()
{
    int marks[5],i,sum=0,avg;

    for (i=0;i<=4;i++){
       printf("enter the subject marks %d \n",i+1);
       scanf("%d",&marks[i]);
    }
    for (i=0;i<=4;i++){
       sum=sum+marks[i];
    }
    avg=sum/5;
    printf("average marks: %d",avg);
}