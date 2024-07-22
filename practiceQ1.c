#include <stdio.h>

int main()
{
    int i, j, N,k;

    printf("Enter rows: ");
    scanf("%d", &N);   
      
    for ( i =1; i <=N; i++)  
    {  
        for ( j = 1; j <= N - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
      }  
    getch();  
    }  

    for (i=1; i<=N; i++){
        // Prints space
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        // Prints first part of the pattern
        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        // Prints second part of the pattern
        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

}
    