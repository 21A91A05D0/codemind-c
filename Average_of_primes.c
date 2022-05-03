#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    int i,c=0,d=0,a[100],k;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==2)
        return x;
    return 0;
}
int main()
{
    int n,i,arr[100],a[100],k=0,fc,c=0;
    float avg,sum=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        {
            fc=isprime(arr[i]);
            a[k++]=fc;
        }
    }
    for(i=0;i<k;i++)
    {
        sum+=a[i];
        if(a[i]>0)
        {
            d++;
        }
    }
    //printf("%d ",sum);
    avg=sum/d;
    printf("%.2lf",avg);
    
}