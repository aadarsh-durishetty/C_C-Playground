#include <stdio.h>
int main()
{
    char name[]={"C-programming"};
    int i;
    while (name[i] != '\0')
    {
        printf("%c",name);
        i++;
    }
    /*printf("\n");
    printf("%s",name);*/

}