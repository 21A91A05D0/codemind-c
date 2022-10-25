#include<stdio.h>
int main()
{
    /*int n,arr[10000],i,j,c=1,a[10000],k=0,d=0;
    double avg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            a[k++]=arr[i];
        }
    }
    
    
    
    
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=0;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]>0)
        {
            s+=a[i];
            d++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        avg=(s/d);
        printf("%.2lf",avg);
    }*/
    
    
    int a;
    scanf("%d",&a);
    int arr[a],i=0;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    double sum = 0,count =0;
    for (i=0; i<a; i++){
        int c=1;
        if (arr[i]==-1){
            continue;
        }
        for (int j=i+1; j<a; j++){
            if (arr[i]==arr[j]){
                c++;
                arr[j]=-1;
            }
        }
        if (arr[i]==c){
            sum+=arr[i];
            count++;
        }
    }
    if (count ==0 ){
        printf("%d",-1);
    }
    else{
        double res = sum/count;
        printf("%.2lf",res);
    }
    return 0;
}