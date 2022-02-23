#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>







void *childThread(void* args)
{
	int mypid, myppid;
	mypid = getpid();
	myppid = getppid();
	printf("The process ID is %d\n", mypid);
	printf("The parent process ID is %d\n", myppid);
	return NULL;
}




int main()
{
	int nop;
	int i = 0;
	pthread_t pid;
	
	printf("How many processes?");
	scanf("%d", &nop);

	for (i ; (nop > i) ; i++ )
	{
	
	
	
	int a = fork();
	if (a == 0)
	{
	
	pthread_create(&pid, NULL, &childThread, NULL);
	pthread_join(pid,NULL);
	
	
	}
	}
	pthread_exit(NULL);
	
	
	
}
