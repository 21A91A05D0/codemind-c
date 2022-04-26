
#include<stdio.h>
int main()
{
	int n,i,arr[100],c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i+=2)
	{
	    {
	   
		if(arr[i]%2==1)
		{
		    c++;
			printf("False");
			break;
     	}
	}
	
	}
	if(c==0)
	{
		printf("True");
	}
	return 0;
	
}
