#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
int main(){
    int process,t;
    process=fork();
    if(process==0){
        printf("\nChild Process: %d\nparent Process: %d",getpid(),getpid());
        t=getpid();
        kill(t,SIGKILL);
    }
    else{
        sleep(2);
        printf("\nYOU LOOK GOOD");
        printf("\nChild Process: %d\nparent Process: %d",getpid(),getpid());
        }
    return(0);
}

