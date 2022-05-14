#include<stdio.h>
 #include<string.h>
 int main()
 {
     char str[100];
     int l,i,c=0;
     scanf("%[^
]%*c",str);
     l=strlen(str);
     for(i=0;i<=l;i++)
     {
         if (str[i]>='0' && str[i]<='9')
         {
             c++;
         }
     }
     if(c>1)
     {
         printf("Contains %d digit",c);
     }
     if(c==0)
     {
         printf("Doesn't contain digit");
     }
 }