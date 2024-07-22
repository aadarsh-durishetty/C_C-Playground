#include <stdio.h>
//#include <string.h>//
/*int main()
{
    char namelist[6][20]={"raghava","raju","madhu","sagar","vinod","prakash"};
    char name[20];
    int i;
    printf("enter your name: ");
    scanf("%s",&name);

    for (i=0;i<6;i++)
    {
        if (strcmp(&namelist[i][0], name)==0){
           printf("welcome %s, you are in!",name);
        }
    }
    printf("sorry %s, you are out!",name);

}*/
int main()
{
    char str1[]= "copy";
    char str2[]= "Trophy";
    int i,j,k;
    i=strcmp(str1,"copy");  // ascii value of str1 "c" subtract "c" in "copy" so, 0
    j=strcmp(str1,str2);
    k=strcmp(str2,"fox");
    printf("\n %d %d %d",i,j,k);
}