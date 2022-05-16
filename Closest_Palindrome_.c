#include<stdio.h>
int fun(int n)
{
    int t=0,d,rev=0;
    t=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,j,d,rev=0,t=0,v=0,y=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(fun(i)==1)
        {
            y=i;
            break;
        }
    }
    for(i=n+1;i<10000;i++)
    {
        if(fun(i)==1)
        {
            v=i;
            break;
        }
    }
    int a=n-y;
    int b=v-n;
    if(a==b)
    {
        printf("%d %d",y,v);
    }
    if(a<b)
    {
        printf("%d",y);
    }
    
    
}