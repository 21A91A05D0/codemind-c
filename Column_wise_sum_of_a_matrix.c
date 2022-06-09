#include<stdio.h>
int main()
{
    int a[100][100];
    int n,i,j,r,c,s=0,k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            s+=a[j][i];
        }
        printf("%d ",s-k);
        k=s;
    }
}