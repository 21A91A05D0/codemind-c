#include<stdio.h>
int main()
{
    int n,arr[100],i,t=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(int j=i+1;j<n;j++)
        {
        	if(arr[i]==0)
        	{
        		break;
			}
            if(arr[i]==arr[j])
            {
                arr[j]=0;
                c++;
            }
        }
        if(arr[i]==c)
        {
            d++;
            printf("%d ",arr[i]);
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}