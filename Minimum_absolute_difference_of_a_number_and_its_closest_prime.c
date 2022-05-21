#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i,c=0;
    for(i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=0,l=0,j,f=0,d=0;
    scanf("%d",&n);
    {
        for(i=n;i<=150;i++)
        {
            if(isprime(i)==1)
            {
                l=i;
                break;
            }
        }
        for(i=n;i>=0;i--)
        {
            if(isprime(i)==1)
            {
                f=i;
                break;
            }
        }
        int a=l-n;
        int b=n-f;
        if(a>=b)
        printf("%d",b);
        else
        printf("%d",a);
    }
    
}