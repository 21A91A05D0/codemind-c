#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            return 0;
        }
    }
        
    printf("False");
    return 0;
}