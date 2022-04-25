#include<stdio.h>
int main()
{
    int arr[1000],i,j,n,t=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        d=0;
        t=arr[i];
        for(j=0;j<n;j++)
        {
            if((t==arr[j]) && (i!=j))
            {
                d=1;
            }
        }
        if(d==0)
        {
            printf("%d ",t);
        }
    }
    return 0;
}