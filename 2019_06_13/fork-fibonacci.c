#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int fibonacci(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
int guardarEntero(char *fn, int n){
	FILE *fp;
	fp = fopen(fn,"w");
	fprintf(fp,"%d",n);
	fclose(fp);
	return 0;
}

int leerEntero(char *fn){
	FILE *fp;
	int n;
	fp = fopen(fn,"r");
	fscanf(fp,"%d",&n);
	fclose(fp);
	return n;
}

int main(int argc,char** argv){
	int x = 15;
	int y,z,a,b;
	pid_t pid;
	int status;
	//printf("Hola \n");
	pid = fork();
	//wait(&status); //operador entero
	//printf("Hola a todos \n");
	if (pid != 0){
		pid = wait(&status);
		y = leerEntero("hola.txt");
		b = y*100;
		printf("El resultado es %d\n",b); 
	///	printf("I'm overlord and my id is %d, the slave id %d\n",getpid(),pid);
	}
	else {
		//z = leerEntero("hola.txt");
		//pid = wait(&status);
		a = fibonacci(x);
		printf("Fibonacci %d\n",a);
		guardarEntero("hola.txt",a);
	///	sleep(3);
	///	printf("I'm the slave with id %d and my variable pid is %d\n",getpid(),pid);
	}

}
