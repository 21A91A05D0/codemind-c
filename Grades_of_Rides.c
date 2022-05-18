#include<stdio.h>
int main()
{
    int hf,sp,sd;
    scanf("%d%d%d",&hf,&sp,&sd);
    //printf("%d %d %d",hf,sp,sd);
    if(hf>50 && sp>60 && sd>100)
    printf("10");
    else if(hf>50 && sp>60)
    printf("9");
    else if(sp>60 && sd>100)
    printf("8");
    else if(hf>50 && sd>100)
    printf("7");
    else if(hf>50 || sp>60 || sd>100)
    printf("6");
    else
    printf("5");
}