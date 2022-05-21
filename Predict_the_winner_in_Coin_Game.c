#include<stdio.h>
int main()
{
    int n,m,i,c=0,a;
    scanf("%d%d",&n,&m);
    if(n<=2)
    {
        printf("Player 2");
    }
    else
    {
        while(n>0)
        {
            a=n/2;
            c++;
            if(a<2)
            {
                break; 
            }
            n=a;
        }
        if(c%2!=0)
        printf("Player 2");
        else
        printf("Player 1");
    }
    
}