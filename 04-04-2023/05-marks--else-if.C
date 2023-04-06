#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter the marks :");
	scanf("%d",&marks);
	if(marks==100)
	{
		printf("Ginius");
	}
	else if(marks>=80 && marks<100)
	{
		printf("Topper");
	}
	else if (marks>=60 && marks<=79)
	{
		printf("Good Student");
	}
	else if (marks>=35 && marks<=59)
	{
		printf("Average Student");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
