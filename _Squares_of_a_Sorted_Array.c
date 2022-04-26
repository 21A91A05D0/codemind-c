#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,arr[100],brr[100],j,k=0,temp=0,sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=arr[i]*arr[i];
        brr[k]=sq;
        k++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(brr[i]>brr[j])
            {
                temp=brr[i];
                brr[i]=brr[j];
                brr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    
}