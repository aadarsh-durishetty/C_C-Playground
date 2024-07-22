/*#include <stdio.h>
#include <string.h>
int main()
{
    char num[20];
    puts("enter the string");
    gets(num);
    puts(num);

}*/

#include <stdio.h>
#include <string.h>
#define max 15
int main()
{
    char num[max];
    fgets(num,max,stdin);    // fgets is preferred over gets to save data //
    printf("string is: %s\n",num);
}