#include<stdio.h>
int main()
{
    int arr[100],i,n,k,c=0;
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
            c=1;
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}