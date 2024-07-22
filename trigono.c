#include <stdio.h>
#include <math.h>
int main()
{
    int t,result;
    printf("enter degree \n");
    scanf("%d",&t);
    result=(sin(t)*sin(t) + cos(t)*cos(t));
    if (result==1){
        printf("valid");
    }
    else{
       printf("invalid");
    }


}