#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include<sys/syscall.h>


int main() {
	pid_t pid = fork();

	if(pid < 0)
		return errno;
	else 
		if(pid == 0)
			printf("Child PID: %d\n", getpid());
				
	printf("Parent PID: %d\n", getpid());
	
	//the pstreeFrom(331) is called
	//it returns the process tree from parent and from child
	syscall(331, getpid());
	

	wait(NULL);
	return 0;
}

