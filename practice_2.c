#include <stdio.h> 
 
int main()
{
  int n1,n2;
  scanf("%d",&n1); // no of names in array 1
  scanf("%d",&n2); // no of names in array 2
  char names1[n1][10];
  char names2[n2][10];
  int i,j; 
  
  for(i=0; i<n1; i++) { 
  
    scanf("%s",&names1[i]); 
  } 
  
  for(i=0; i<n1; i++){
    printf( "%s\n", names1[i] ); // list of names of array 1
    i++;
  }
  
  for(j=0; j<n2; j++) { 
 
    scanf("%s",&names2[i]); 
  } 

  for(j=0; j<n2; j++){ 
    printf( "%s\n", names2[i] ); // list of names of array 2
    j++;
  }
  
  return 0; 
} 