#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char question;
	int question1;
	char email[100];
	char soo[20];
	char name[50];
	char dep[60];
	int question2;
	float question3;
	int nopp;
	int in;
	
	printf("Press v for Voter X  and Press p for PubTAKS ");
	scanf("%c",&question);
	
	if (question == 'v')
	{
		printf("welcome to Voter X.");
		printf("\n");
		
		printf("What is your name? ");
		scanf("%s",name);
		printf("\n");
		
		printf("What is your email address? ");
		scanf("%s",email);
		printf("\n");
		
		printf("What is your state of origin?");
		scanf("%s",soo);
		printf("\n");
		
		printf("What is your department? ");
		scanf("%s",dep);
		printf("\n");
		
		printf("Are you the current class rep? Press 1 for yes or 2 for no. ");
		scanf("%d",&question1);
		printf("\n");
		
		printf("What level are you in? ");
		scanf("%d",&question2);
		printf("\n");
		
		printf("What is your current CGPA? ");
		scanf("%f",&question3);
		printf("\n");
		
		if ((question1 == 1) && (question2 != 100) && (question3 >= 4.0))
		{
			
			printf("%s", name);
			printf("\n");
			
			printf("%s",email);
			printf("\n");
			
			printf("%s", dep);
			printf("\n");
			
			printf("%s", soo);
			printf("\n");
			
			printf("You can vote");
			printf("\n");
		}
		
		else 
		{
			printf("Sorry, you are not eligible to vote");
			printf("\n");
		}
		
		
		}
		
		else if (question == 'p')

		{	
			char you[50];
			
			printf("What is your name? ");
			scanf("%s",you);
			printf("\n");
			
			printf("How many papers have you published? ");
			scanf("%d",&nopp);
			printf("\n");
			
			if ((nopp >= 3 ) && (nopp <= 5))
			{
				in = 500000;
				}
			
			else if ((nopp > 5 ) && (nopp < 10))
			{
				in = 800000;
				}
			
			else if (nopp > 10 )
			{
				in = 1000000;
				}
				
			else
			{
				in = 100000;
			}
			
			printf("Hello, %s ", you);
			printf("\n");
			printf("Your incentive is  N%d", in);
			printf("\n");
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		else{
		printf("hi");
		}
		}
