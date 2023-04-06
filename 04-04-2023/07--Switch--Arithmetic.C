#include<stdio.h>
int r;
int main()
{

	do{
		int a,b,c,ch;
		
		printf("Enter the frist number :");
		scanf("%d",&a);
		printf("Enter the secend number :");
		scanf("%d",&b);
		
		printf("choice Arithmetic operators (1+)(2-)(3*)(4/):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				c=a+b;
				printf("Total : %d",c);
				break;
	
			case 2:
				c=a-b;
				printf("Total : %d",c);
				break;	
				
			case 3:
				c=a*b;
				printf("Total : %d",c);
				break;
			
			case 4:
				c=a/b;
				printf("Total : %d",c);
				break;	
				 
		}
			printf("\n\n\t\t\tDo you calc again (y-n):");
			scanf("%d",&r);
					
	}while(r=='y');
	
	
	return 0;
}
