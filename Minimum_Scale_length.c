#include<stdio.h>
int main()
{
    int n,i,arr[100],t=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    t=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%t==0)
       {
           j++;
       }
       else
       {
           t=arr[j]%t;
           i++;
       }
    }
    printf("%d",t);
}