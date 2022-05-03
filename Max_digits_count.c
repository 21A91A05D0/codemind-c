#include<stdio.h>
int count(int n)
{
    int i,d,c=0;
    while(n>0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,i,arr[100],res,a[100],k=0,max,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        res=count(arr[i]);
        a[k++]=res;
    }
    max=a[0];
    for(i=0;i<k;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]==max)
        {
            c++;
        }
    }
    printf("%d",c);
}