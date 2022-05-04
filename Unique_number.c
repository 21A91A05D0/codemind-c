#include<stdio.h>
int main()
{
    int a[100],k=0,n,i,d,c=0,f=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        a[k++]=d;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(int j=0;j<k;j++)
        {
            if(a[i]==a[j])
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