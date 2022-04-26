#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==1)
        {
            c=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            d=1;
        }
    }
    if(c==1 || d==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}