#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i;
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
    int n,m,i=1,s,k=0,d;
    scanf("%d",&n);
    scanf("%d",&m);
    s=n+m;
    while(s>0)
    {
        if(isprime(s+i)==1)
        {
            k=(s+i);
            break;
        }
        i++;
    }
    d=k-s;
    printf("%d",d);
}