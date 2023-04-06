#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
				{
					printf("max value is :%d",a);
				}
			else
				{
					printf("max value is :%d",c);
				}
		}
	else
		{
			if(b>c)
				{
					printf("max value is :%d",b);
				}
			else
				{
					printf("max value is :%d",c);
				}
		}
	
	return 0;
}
