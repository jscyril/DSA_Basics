#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
char message[100];
int main()
{
    char buf[1024];
    int fd[2];

    pipe(fd);
    if(fork() != 0){
        printf("\n\nENTER YOUR NAME HERE :- ");
        fflush(stdin);
        scanf("%s",&message);
        printf("the message is %s", message);
        write(fd[1],message,strlen(message)+1);
    }else{
        read(fd[0],buf,1024);
        printf("\nYOUR NAME IS :- %s\n", buf);
    }
    return 0;
}