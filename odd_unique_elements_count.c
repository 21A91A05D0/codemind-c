#include<stdio.h>
int main()
{
    int i,n,k=0,d,c=0,arr[100],f=0,t=0,a[100];
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
                }
            }
        }
        if(c==1)
        {
            f++;
            a[k]=arr[i];
            k++;
        }
        
    }
    for(k=0;k<f;k++)
    {
        if(a[k]%2==1)
        {
            t++;
        }
    }
    printf("%d",t);
}