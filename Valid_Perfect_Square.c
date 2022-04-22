#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        for(j=1;j<=arr[i];j++)
        {
            if(temp==(j*j))
            {
                c++;
                break;
            }
        }
        if(c==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
            
        }
    }
    
    
}