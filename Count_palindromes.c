#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,d,sum=0,rev=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        temp=arr[i];
        while(arr[i]>0)
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        if(rev==temp)
        {
            c++;
        }
    }
    printf("%d",c);
    
    
    
}