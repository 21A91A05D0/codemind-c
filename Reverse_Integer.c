#include<stdio.h>
int main()
{
    int n,d,rev=0,c=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        c++;
        rev=(rev*10)+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}