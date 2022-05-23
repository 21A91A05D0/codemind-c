#include<stdio.h>
int main()
{
    int n,i,a1[100],c=0,j,k,m;
    int a2[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&a2[j]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=a1[i];j<=a2[i];j++)
        {
            if(j==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
        
    
}