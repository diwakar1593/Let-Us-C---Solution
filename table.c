#include<stdio.h>
int main()
{
    int num=0,i;
    printf("enter your number for table :");
    scanf("%d",&num);
    for(i=0;i<=20;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i ); 
    }
}
