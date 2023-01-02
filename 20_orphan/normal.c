#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(){

    pid_t pid = fork();

    if(pid > 0){
        printf("i am father process, pid: %d, ppid: %d\n",getpid(),getppid());
    }
    else if(pid == 0){
        
        printf("i am child process, pid: %d, ppid: %d\n",getpid(),getppid());
    }

    for(int i = 0; i < 3; i++){
        printf("i: %d,pid: %d\n",i,getpid());
    }

    return 0;
}