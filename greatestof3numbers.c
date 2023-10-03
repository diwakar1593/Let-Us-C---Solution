#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 number:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		   printf("The greatest of 3 numbers is %d",a);
	    }
	}
	else if(b>c)
	{
		printf("The greatest of 3 numbers is %d",b);
	}
	else
	{
	    printf("The greatest of 3 numbers is %d",c);
	}
}
