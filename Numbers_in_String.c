#include<stdio.h>
 #include<string.h>
 int main()
 {
     char str[100];
     int lenght,i,sum=0;
     scanf("%[^
]%*c",str);
     //printf("%s",str);
     lenght=strlen(str);
     for(i=0;i<=lenght;i++)
     {
         if (str[i]>='1' && str[i]<='9')
         {
            sum+=(str[i]-48);
         }
     }
     printf("%d",sum);
 }