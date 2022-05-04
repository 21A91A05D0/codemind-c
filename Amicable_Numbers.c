#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum==b)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    //printf("%d",sum);
}