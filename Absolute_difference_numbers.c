#include<stdio.h>
#include<math.h>
int emo(int n,int k)
{
    int f=0,d;
    while(k--)
    {
        d=n%10;
        f=f*10+d;
        n=n/10;
    }
    return f;
}
int rever(int n)
{
    int d,rev=0;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,k,i,c=0,d,rev,f=0,a,b=0,l;
    scanf("%d%d",&n,&k);
    l=rever(n);
    int p=emo(n,k);
    a=rever(p);
    int y=emo(l,k);
    printf("%d",abs(a-y));
}