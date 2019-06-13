#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char** argv){
	pid_t pid;
	printf("Hola \n");
	pid = fork();
	printf("Hola a todos \n");
	if (pid != 0){
		printf("I'm overlord and my id is %d, the slave id %d\n",getpid(),pid);
	}
	else {
		printf("I'm the slave with id %d and my variable pid is %d\n",getpid(),pid);
	}

	return 0;

}
