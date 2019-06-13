#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc,char** argv){
	pid_t pid,pid2;
	int status;
	//printf("Hola \n");
	pid = fork();
	//wait(&status); //operador entero
	//printf("Hola a todos \n");
	if (pid != 0){
		pid2 = wait(&status);
		printf("I'm overlord and my id is %d, the slave id %d\n",getpid(),pid);
	}
	else {
		sleep(3);
		printf("I'm the slave with id %d and my variable pid is %d\n",getpid(),pid);
	}

	return 0;

}
