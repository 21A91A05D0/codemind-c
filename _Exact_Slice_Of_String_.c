#include<stdio.h>
int main()
{
    char s[100];
    int i,n,m;
    scanf("%[^
]%*c",s);
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",s[i]);
    }
}