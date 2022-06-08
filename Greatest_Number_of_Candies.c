#include<stdio.h>
int main()
{
    int n,a[100],i,p,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    p=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+k)>=p)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}