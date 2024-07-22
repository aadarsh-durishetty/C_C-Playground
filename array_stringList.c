#include <stdio.h>
#define num 5
#define name 10
int main()
{
    int i;
    char list[num][name]={"aadarsh","vijay","rajesh","vaibhav","sampath"};
    
    for(i=0;i<num;i++){
        printf("%s\n",list[i]);
    }
    for(i=0;i<num;i++){
        strcpy(list[1],"sampath");
    }
    for(i=0;i<num;i++){
        printf("%s\n",list[i]);
    }
}