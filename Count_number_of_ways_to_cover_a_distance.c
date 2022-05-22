#include<stdio.h>
int count(int n)
{
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    return count(n-1)+count(n-2)+count(n-3);
}
int main()
{
    int n,i,m,r;
    scanf("%d",&n);
    r=count(n);
    printf("%d",r);
    
}