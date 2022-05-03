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
int main()
{
    int n,i,arr[100],fc,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fc=isprime(arr[i]);
        if(fc==1)
        {
            c++;
        }
    }
    printf("%d",c);
}