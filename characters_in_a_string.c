#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,l,c=0;
    scanf("%[^
]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        c++;
    }
    printf("%d",c);
}