#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv){
	char *bufp;
	pid_t pid;
	bufp = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANON, 0, 0);
	pid = fork();
	if(pid > 0){
		// parent visit 
		strcpy((char*)bufp,"aaa");
		wait(NULL); // parent wait for child
	}
	else if(pid == 0){
		// child visit
		printf("%s\n",(char*)bufp);
	}
	else{
		perror("fork err");
		exit(1);
	}
	if(munmap(bufp,4096) == -1){
		perror("munmap err");
		exit(1);
	}
	return 0;
}
