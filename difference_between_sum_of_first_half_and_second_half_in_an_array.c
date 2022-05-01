#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k,c=0,pum=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum=sum+arr[i];
    }
    for(j=(n/2);j<n;j++)
    {
        pum=pum+arr[j];
    }
    printf("%d",pum-sum);
}