#include<stdio.h>
int main()
{
	int arr[100],i,n;
	int temp,d,rev=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		
	     
	    temp=arr[i];
	    rev=0;
		while(arr[i]>0)
		{
			d=arr[i]%10;
			rev=(rev*10)+d;
			arr[i]=arr[i]/10;
		}
	    if(temp==rev)
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
    return 0;
}