#include <stdio.h>
int main()
{
    int x,i,j,a[i][j];

    for (i=0;i<3;i++){
    }
       for (j=0;j<3;j++){
            printf("enter a number \n");
            scanf("%d",&a[i][j]);
            if (a[i][j]%2==0){
               printf("even: %d \n",a[i][j]);
            }
            else{
               printf("odd: %d \n",a[i][j]);
            }

       }
}
