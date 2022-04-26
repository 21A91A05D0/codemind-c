#include<stdio.h>
int main()
{
    int n,rev=0,rev1=0,sq,sq1,d;
    scanf("%d",&n);
    sq=n*n; //144 
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d; //21 
        n=n/10;
    }
    sq1=rev*rev; //441
    while(sq1)
    {
        d=sq1%10;
        rev1=rev1*10+d; // 441
        sq1=sq1/10;
    }
    if(sq==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}