#include <stdio.h>
int main()
{
    int m,n,c,d,matrix[10][10],transpose[10][10];
    printf("enter the no of rows and coloumns \n");
    scanf("%d%d",&m,&n);
    printf("enter elements of matrix \n");

    for (c=0;c<m;c++){
      for (d=0;d<n;d++)
         scanf("%d",&matrix[c][d]);
    }
    for (c=0;c<m;c++){
      for (d=0;d<n;d++)
         transpose[d][c]=matrix[c][d];
    }
    printf("original matrix: \n");
    for (c=0;c<m;c++){
      for (d=0;d<n;d++)
         printf("%d\t",matrix[c][d]);
        printf("\n"); // this line is imp*****//
    }

    printf("transpose matrix: \n");
    for (c=0;c<m;c++){
      for (d=0;d<n;d++)
         printf("%d\t",transpose[c][d]);
        printf("\n");
    }
    
}