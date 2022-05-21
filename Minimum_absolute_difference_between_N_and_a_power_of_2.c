#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,res,l,r,a,b;
    scanf("%d",&n);
    l=pow(2,floor(log2(n)));
    r=l*2;
    a=n-l;
    b=r-n;
    if(a>=b)
    printf("%d",b);
    else
    printf("%d",a);
}