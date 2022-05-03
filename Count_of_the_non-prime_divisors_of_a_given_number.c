#include<stdio.h>
#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    int i,c=0,d=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int primecount(int *a,int n)
{
    int i,fc,c=0;
    for(i=0;i<n;i++)
    {
        fc=isprime(a[i]);
        if(fc==1)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,c=0,d=0,e=0,a[100],k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            a[k++]=i;
        }
    }
    d=primecount(a,k);
    printf("%d",c-d);
}