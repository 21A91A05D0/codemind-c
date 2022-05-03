#include<stdio.h>
int main()
{
    int n,i,arr[1000],c=0,d=0,a,b,sum=0;
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
            c=1;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    //printf("%d",sum);
}