#include<stdio.h>
int fun(int n,int *arr)
{
    int i,k=0;
    for(i=n-1;i>=0;i--)
    {
        k=arr[i];
        break;
    }
    return k;
}
int main()
{
    int n,i,arr[100],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        printf("%d ",arr[i]);
        p=fun(n-i,arr);
        printf("%d ",p);
    }
    if(n%2!=0)
    {
        printf("%d ",arr[n/2]);
        printf("0");
    }
}