#include<stdio.h>
int main()
{
    int a[100][100],arr[100];
    int n,i,j,r,c,s=0,k=0,s1=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s+=a[i][j];
            }
            if(a[i][j]%2!=0)
            {
                s1+=a[i][j];
            }
        }
    }
    printf("%d %d",s,s1);

}