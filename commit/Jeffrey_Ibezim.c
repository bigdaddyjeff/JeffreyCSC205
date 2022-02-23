#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

size_t number;
char opname[100][100];
int a, b, c, d;

void *threads(void* body)
{
	printf("Thread ID: %ld \t", pthread_self());
	printf("Operation name: %s \n", opname[a]);

	pthread_exit(NULL);
}

int main()
{
printf("Here are some problems: \n Multi_currency(1) \n User_experience_challenges(2) continuous_updates(3) \n Payment_getway_challenges(4)\n chargeback(5)\n Online fraud(6) \n ");

printf("How many operations do you want to monitor? ");
scanf("%ld", &number);

int number1 = number * (number + 1);
pthread_t id[number1];


for(a = 1; a <= number1; a++)
{
printf("What is the operation %d \n: ", a);
scanf("%s", opname[a]);
}

for (c=1; c<= number; c++)
{

for(int b = 1; b<= (c*2); b++)
{
	pthread_create(&id[b], NULL, threads, (void*) opname[c-1]);
}
}

for ( d=1; d <= number; d++)
{
	for(b = 0; b <(d *2); b ++)
	{
	thread_join(id[b], NULL);
	}
}

}


