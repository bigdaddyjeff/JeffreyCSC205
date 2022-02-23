#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myfirstthread()
{
	sleep(1);
	printf("I am the thread\n");
	return NULL;
}

int main()
{
	pthread_t thread_id;
	printf("Before Thread Execution\n");
	pthread_create(&thread_id, NULL, myfirstthread, NULL );
	pthread_join(thread_id, NULL);
	printf("After Thread execution\n");
	exit(0);
}
