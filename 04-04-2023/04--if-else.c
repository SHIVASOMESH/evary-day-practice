#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age>=18)
		printf("eligible for vote.");
	else 
		printf("your not eligible.");
		
	
	return 0;
}
