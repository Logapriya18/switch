#include<stdio.h>
main()
{
	printf("Pick an item: \n1.Pizza \n2.Burger \n3.pasta \n4.french fries \n5.sandwich ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have picked pizza=Rs239");
			break;
		case 2:
			printf("you have picked Burger=Rs129");
			break;
		case 3:
			printf("you have picked pasta=Rs179");
			break;
		case 4:
			printf("you have picked french fries=Rs99");	
			break;
		case 5:
			printf("you have picked sandwich=Rs149");
			break;
		default: printf("Invalid");	
	}
}
