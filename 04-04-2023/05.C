#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks (1-100) :");
	scanf("%d",&marks);
	
	if(marks==100)
		printf("Ginius");
	else if(marks>=80 && marks<=100)
		printf("Topper");
	else if(marks>=60 && marks<=79)
		printf("Good Student");
	else if(marks>=35 && marks<=59)
		printf("Avaerege Student");
	else if(marks<=35)
		printf("Fail");
	else 
		printf("wroung input");
	
	
	return 0;
	
}
