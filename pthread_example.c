/*Troy Hamilton thcompsci@gmail.com 20220925*/
/*compile with:
|*clear && g++ -lpthread pthread_example.c && ./a.out
*/

#include <pthread.h>	//pthread_create() pthread_t
#include <stdio.h>	//printf()
#include <unistd.h>	//sleep()

/*pthread_create() can only call functions 
  that return a void*, and take a void* as a
  parameter argument.*/
void* test(void* unused)
{
	printf("Hello\n");
	return NULL; //used to appease compiler
}

int main(void)
{
	pthread_t pt_id; //a thread id. used to appease compiler

	pthread_create(&pt_id, NULL, test, NULL);
	
	sleep(1); //prevent main() from returning before Hello can be printed
	
	return 0;
}

