#include<stdio.h>
int main()
{
    int i,n,k=0,d,c=0,arr[100],f=0,t=0,a[100];
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=0;
                }
            }
        }
        if(c>=1)
        {
            a[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    
}