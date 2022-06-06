#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],ch;
    int n,l,i,c=0;
    scanf("%[^
]%*c",s);
    scanf("%c",&ch);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(ch==s[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
    
}