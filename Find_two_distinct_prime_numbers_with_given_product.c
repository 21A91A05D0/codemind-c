#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return n;
    }
    return 0;
}
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            if((isprime(i)*isprime(j))==n)
            {
                c=1;
                printf("%d ",i);
                break;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}