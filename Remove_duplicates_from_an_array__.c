#include<stdio.h>
int main()
{
    int n,i,arr[10000],c=0,j,f=0,d=0,t=0,h=0;
    int a[10000],k=0;
    float avg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>-1)
        {
            printf("%d ",arr[i]);
        }
    }
}