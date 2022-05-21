#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int n,i;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='6')
        {
            s[i]='9';
            break;
        }
    }
    printf("%s",s);
}