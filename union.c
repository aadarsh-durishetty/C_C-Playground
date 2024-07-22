#include <stdio.h>

union data
{
    char name[100];
    int age[10];
    int phno[10];
    char address[100];
    
};

int main()
{
    union data n;
    scanf("%s", n.name);
    scanf("%d", n.age);
    scanf("%d", n.phno);
    scanf("%s", n.address);

    printf("memory occupied: %d", sizeof(n));
    
    return 0;
}