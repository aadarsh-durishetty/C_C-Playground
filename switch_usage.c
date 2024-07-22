#include <stdio.h>
int main()
{
    int index,marks,grade;
    printf("enter marks \n");
    scanf("%d",&marks);
    index=marks/10;
    switch(index)    // index matches all given cases
    {
    case 9:
        grade="A";
        break;
    case 8:
        grade="B";
        break;
    case 7:
        grade="C";
        break;
    case 6:
        grade="D";
        break;
    default:
        grade="F";
        break;  
    }
    printf("grade: %s",grade);
    
}