#include<stdio.h>
int main()
{
    int n,r,p,t=0,g=0,rev=0,d,x=0;
    scanf("%d",&n);
    p=n*n;
    t=n;
    while(n>0)
    {
        d=n%10;
        g++;
        n=n/10;
    }
    while(g--)
    {
        r=p%10;
        x=x*10+r;
        p=p/10;
    }
    while(x>0)
    {
        d=x%10;
        rev=rev*10+d;
        x=x/10;
    }
    if(t==rev)
    {
        printf("Automorphic Number
");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}