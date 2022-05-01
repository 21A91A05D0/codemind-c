#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k,c=0,d=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c=i;
            break;
        }
    }
    for(k=0;k<=c;k++)
    {
        sum=sum+arr[k];
    }
    printf("%d",sum);
}