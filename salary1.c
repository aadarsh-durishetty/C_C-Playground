#include <stdio.h>
int main()
{
    char g;
    int exp,edu,sal=0,ctr=1;
    printf("enter gender(m/f), experience(yrs), education(0:UG;1:PG) \n");
    scanf("%c%d%d",&g,&exp,&edu);
    if ((g=='m' && exp>=10 && edu==0) || (g=="m" && exp<10 && edu==1)){
        sal=10000;
    }
    else if (g=='m' && exp>=10 && edu==1){
        sal=15000;
    }
    else if (g=='m' && exp<10 && edu==0){
        sal=7000;
    }
    else if (g=='f' && exp>=10 && edu==1){
        sal=12000;
    }
    else if (g=='f' && exp>=10 && edu==0){
        sal=9000;
    }
    else if (g=='f' && exp<10 && edu==1){
        sal=10000;
    }
    else if (g=='f' && exp<10 && edu==0){
        sal=6000;
    }
    else{
        printf("invalid input");
        ctr=0;
    }
    if (ctr==1){
       printf("salary:%d",sal);
    }
}   