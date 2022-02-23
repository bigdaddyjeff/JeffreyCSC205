#include <stdio.h>

int main()
{
	int totalprice;
	char order;
	int quantity;
	
	
	printf("Welcome to Mama Gas Restraurant \n");
	printf("Menu \t");
	printf("		        Price \n");
	printf("P = Poundo Yam/Edinkainko Soup \t");
	printf("N3,200 \n");
	printf("F = Fried rice and chicken \t");
	printf("N3,000 \n");
	printf("A = Amala and Ewedu Soup \t");
	printf("N2,500 \n");
	printf("E = Eba and Egusi Soup \t");
	printf("       N2,000 \n");
	printf("W = White rice & stew \t");
	printf("       N2,500 \n");
	
	printf("What do you want? \n");
	scanf("%c", &order);
	
	switch(order)
	{
	case 'P':
		printf("What quantity do you want? \n");
		scanf("%d", &quantity);
		printf("The total price is = N%d", (3200 * quantity)); 
		printf("\n"); 
		break;
	case 'F':
		printf("What quantity do you want? \n");
		scanf("%d", &quantity);
		printf("The total price is = N%d", (3000 * quantity)); 
		printf("\n"); 
		break;
	case 'A':
		printf("What quantity do you want? \n");
		scanf("%d", &quantity);
		printf("The total price is = N%d", (2500 * quantity)); 
		printf("\n"); 
		break;
		
	case 'E':
		printf("What quantity do you want? \n");
		scanf("%d", &quantity);
		printf("The total price is = N%d", (2000 * quantity)); 
		printf("\n"); 
		break;
		
	case 'W':	
		printf("What quantity do you want? \n");
		scanf("%d", &quantity);
		printf("The total price is = N%d", (2500 * quantity));
		printf("\n"); 
		break;
	
	}
}
