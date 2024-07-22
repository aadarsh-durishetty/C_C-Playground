/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[20],ch,a_char;
    int freq[26],i,len;
    for (i=0;i<26;i++){
        freq[i]=0;
        scanf("%[^\n]s",str); 
    }
    len= strlen(str);
    for (i=0;i<len;i++){
        ch=str[i];
        if (isalpha(ch)){
            ch=tolower(ch);
            freq[ch-'a']++;
        }
    }
    a_char='a';
    for (i=0;i<26;i++)
    printf("%c\t%d\n",a_char+i,freq[i]);

}*/