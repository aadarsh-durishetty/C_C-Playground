#include <stdio.h>

int main()
{
    int n;
    int pts[100];
    int y[100], x[100];
    
    scanf("%d", &n);
    
    for (int i=0; i<2*n; i++)
    {
        scanf("%d", &pts[i]);
    }
    
    for (int i=0; i<2*n; i++)
    {
        x[0] = pts[0];
        x[i+1] = pts[i+2];
    }
    
    for (int i=0; i<2*n; i++)
    {
        y[i] = pts[i+1];
    }
    
    for (int i=0; i<n; i++)
    {
        printf("X-coordinate: %d\n", x[i]);
        printf("Y-coordinate: %d\n", y[i]);
    }
    
}