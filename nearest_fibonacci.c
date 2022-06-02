#include<stdio.h>
#include<math.h>
int fiba(int n)
{
    int a,b,c;
    a=0;
    b=1;
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>n)
        {
            return a;
        }
    }
}
int main()
{
    int a,b,p,c,t,n,l;
    scanf("%d",&n);
    t=n;
    p=fiba(n);
    a=0;
    b=1;
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>n)
        {
            l=b;
            break;
        }
    }
    if(abs(l-t)>abs(t-p))
    {
        printf("%d",p);
    }
    else if(abs(l-t)==abs(t-p))
    {
        printf("%d %d",p,l);
    }
    else
    {
        printf("%d",l);
    }
}