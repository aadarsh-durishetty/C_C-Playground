#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main(){
    char inputString[100], subString[100];
    int index, subStringLength;
    memset(subString, '\0', sizeof(subString));
    printf("Enter a String \n");
    gets(inputString);
    printf("Enter starting position of sub-string and it's length \n");
    scanf("%d %d", &index, &subStringLength);
     
    strncpy(subString, inputString + index, subStringLength);
     
    printf("SubString is : %s \n", subString);
    getch();
    return 0;
}