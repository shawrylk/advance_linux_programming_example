#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
	pid_t child_pid;
	int flag = 1;
	printf("the main program proces ID is %d\n ", (int)getpid());
	child_pid = fork();
	if (child_pid != 0)
	{
		printf("this is the parent process, with ID %d\n ", (int)getpid());
		printf("the child process ID is %d\n ",(int)child_pid);
		if (flag == 1)
		{
						flag = 0;

			printf("parent flag\n");
		}
	}
	else
	{
		printf ("this is the child process, with ID %d\n",(int)getpid());
	//getchar();
	//getchar();
	if (flag == 1)
		{
						flag = 0;

			printf("child flag\n");
		}
	}
	return 0;
}