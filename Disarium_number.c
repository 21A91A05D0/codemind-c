#include<stdio.h>
#include<math.h>
int countdigit(int n)
{
    int d,c=0;
    while(n>0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,d,temp=0,sum=0,res,c=0;
    scanf("%d",&n);
    temp=n;
    c=countdigit(n);
    while(n>0)
    {
        d=n%10;
        sum=sum+pow(d,c--);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}