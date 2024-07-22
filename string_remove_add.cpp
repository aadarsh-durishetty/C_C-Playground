#include <stdio.h>
struct name
{
    char Fname[20];
    char Sname[20];
    
};

int main()
{
    struct name n1;
    char Fname[20];
    char Sname[20];
    
    scanf("%s", n1.Fname);
    scanf("%s", n1.Sname);
    
    printf("%s", Fname);
    printf("%s", Sname);

    return 0;
}