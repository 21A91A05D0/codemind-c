#include<stdio.h>
int happy(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        s=s+(d*d);
        n=n/10;
    }
    return s;
}
int main()
{
    int n,res,c=0;
    scanf("%d",&n);
    while(1)
    {
        res=happy(n);
        if(res<10)
        {
            if(res==1 || res==7)
            {
                c=1;
            }
            break;
        }
        n=res;
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}