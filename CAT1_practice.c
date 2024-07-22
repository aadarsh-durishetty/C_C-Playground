#include<stdio.h>
main()
{
 int i, j, k, l;
 int n=5;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d",i); //you can put any character
  }
  printf("\n"); 
 }
 for(i=n-1; i>=1; i--)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d",i); //you can put any character
  }
  printf("\n");
 }
}