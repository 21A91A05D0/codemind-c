#include<stdio.h>
int main()
{
    int n,i,d,temp=0,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}