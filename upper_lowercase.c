#include <stdio.h>
int main()
{
    char n;
    printf("enter data \n");
    scanf("%c",&n);
    if (n>='a' && n<='z')
       printf("alphabet lower case");
    else if (n>='A' && n<='Z')
       printf("alphabet upper case");
    else if (n>='0' && n<='9')
       printf("digit");
    else{
       printf("special character");
    }

}