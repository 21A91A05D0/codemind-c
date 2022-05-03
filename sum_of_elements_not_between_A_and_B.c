#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,a,b,d=0,sum=0,ar[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a)
        {
            ar[k]=arr[i];
            k++;
        }
        if(arr[i]>b)
        {
            ar[k++]=arr[i];
        }
    }
    for(i=0;i<k;i++)
    {
        sum+=ar[i];
    }
    printf("%d ",sum);
    
}