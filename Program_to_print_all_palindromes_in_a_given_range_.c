#include<stdio.h>
int main()
{
    int n,m,i,j,d,c=0,t=0,rev=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        rev=0;
        while(t)
        {
            d=t%10;
            rev=rev*10+d;
            t=t/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
        
    }
}