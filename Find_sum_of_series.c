#include<stdio.h>
int main()
{
    double n,i;
    double c=0;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        c+=(1/i);
    }
    printf("%.2lf",c);
}