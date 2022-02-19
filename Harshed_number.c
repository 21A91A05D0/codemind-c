#include<stdio.h>
int main()
{
    int n,i,d,s=0,temp=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
       d=n%10;
       s=s+d;
       n=n/10;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}