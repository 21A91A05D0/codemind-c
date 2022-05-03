#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,d=0,a,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}