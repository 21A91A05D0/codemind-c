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
    int n,i,c=0,l=0,j=0,t,k=0,f=0,d=0,a,b;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        j=n;
        for(i=n;i<=10000;i++)
        {
            if(isprime(i)==1)
            {
                l=i;
                break;
            }
        }
        for(i=n;i>=-10;i--)
        {
            if(isprime(i)==1)
            {
                f=i;
                break;
            }
        }
        if(abs(l-j)>=abs(j-f))
        {
            printf("%d
",f);
        }
        else
        {
            printf("%d
",l);
        }
    }
    
}