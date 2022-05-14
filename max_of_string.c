#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l,d,max;
    scanf("%[^
]%*c",str);
    l=strlen(str);
    max=str[0];
    for(i=0;i<l;i++)
    {
        if(max<str[i])
        {
            max=str[i];
        }
    }
    printf("%c",max);
    
}