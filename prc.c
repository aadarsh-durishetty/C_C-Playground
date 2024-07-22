
/*
#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10];
    int n;
    scanf("%d", &n);
    int sum=0;

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }

    for (int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int add, rem;
    int len=sizeof(sum)-1;
    if (sum>9){
        add=0;
        for (int i=0;i<len;i++){
            rem=sum%10;
            add=add+rem;
            sum=sum/10;
        }
        sum=add;
    }
    add=sum;
    if (sum>9){
        add=0;
        for (int i=0;i<len;i++){
            rem=sum%10;
            add=add+rem;
            sum=sum/10;
        }
        sum=add;
    }
    add=sum;
    printf("%d", add);
    arr[n] = sum;

    for (int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
int main(){
    int arr[100];
    int x,n;
    scanf("%d", &x);
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]==x){
                printf("%d = %d + %d \n", x, arr[i], arr[j]);
            }
        }
    }
    return 0;
}

*/