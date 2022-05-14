#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100],res;
    int i,l,p;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        res=tolower(str[i]);
        printf("%c",res);
    }
}