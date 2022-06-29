#include<stdio.h>
int main()
{
    int n,m,j,i,arr1[1000],arr2[1000],k=0,a[100],c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
        //printf("%d ",arr2[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                a[k++]=arr2[j];
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
}