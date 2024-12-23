//post-increment operation to be used in squeeze
//Date: 22-12-2024
//Author: Peter Daniel

#include <stdio.h>

void squeeze(char s[], char c);
int main()
{
    squeeze("Hello", 'l');
}

void squeeze(char s[], char c)
{
    char t[10], i,j;
    for(i = 0; s[i]!='\0'; i++)
    {
        if(s[i] != c)
        {
            t[j] = s[i];
            j++;
        }
    }
    t[j] = '\0';
    printf("Output is %s \n", t);
}
