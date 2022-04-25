#include<stdio.h>
int main()
{
    int i,n,k=0,d,c=0,arr[100],f=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        arr[k++]=d;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(int j=0;j<k;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>1)
        {
            f=1;
            printf("Not Unique Number");
            break;
        }
    }
    if(f==0)
    {
        printf("Unique Number");
    }
}