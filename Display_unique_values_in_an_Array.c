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
        t=arr[i];
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
           
                    //f=1;
                    c++;
                }
            }
        }
        //f=0;
        if(c==1)
        {
            f++;
            a[k]=arr[i];
            k++;
            //printf("%d ",arr[i]);
            //break;
        }
        //else
        
    }
    if(f==0)
    printf("-1");
    else
    {
        for(k=0;k<f;k++)
        printf("%d ",a[k]);
    }
}