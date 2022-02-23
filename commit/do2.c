#include <stdio.h>
#include <pthread.h>

void *threadfunction(void* args)
{
	while(1)
	{
		printf("I am Thread function. \n ");
	}
}

int main()
{
	pthread_t id;
	int ret;
	
	ret = pthread_create(&id, NULL, &threadfunction, NULL);
	if (ret == 0)
	{
		printf("Thread created successfully \n" );
		pthread_create(&id, NULL, &threadfunction, NULL);
	}
	
	else
	{
		printf("Thread not created \n");
		return 0;
	}
	
}

