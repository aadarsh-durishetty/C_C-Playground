#include <stdio.h>
#include <string.h>
/*int main()
{
    char str1[]="aadarsh",str2[]="durishetty";
    strcpy(str2,str1);
    printf("%s\n",str2);
    int a[10];
    printf("%f\n",a[114]);
    printf("%f\n",a[-114]);
}*/

int main()
{
    char scr[20]="destination";
    char dest[20]="";
    printf("\n source string : %s",scr);
    printf("\n destination string : %s",dest);
    strcpy(dest,scr);
    printf("\n target string after strcpy() : %s",dest);
}