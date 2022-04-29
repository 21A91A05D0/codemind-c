#include<stdio.h>
int main()
{
    int n,arr[100][100],i,j,sum=0,pum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            if(i+j==(n-1))
            {
                pum=pum+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d",pum);
    
}