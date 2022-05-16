#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],p=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        p+=pow(2,j)*arr[i];
    }
    printf("%d",p);
}