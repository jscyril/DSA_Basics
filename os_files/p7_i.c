#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
pid_t pid1=fork();
pid_t pid2=fork();
if(pid1==0)
{
pid_t pid3=fork();
if(pid3==0)

{
printf("\n\n GRANDCHILD 1");
printf("\n Id of Grandchild 1: %d",getpid());
printf("\n Id of child 1: %d",getppid());
}
else
{
wait(NULL);
printf("\n\n Child 1");
printf("\n\n id of Child 1:%d",getpid());
printf("\n\n id of parent :%d",getppid());
}
}
if(pid2==0)
{
pid_t pid4=fork();
if(pid4==0)
{
printf("\n\n GRANDCHILD 2");
printf("\n Id of Grandchild 2: %d",getpid());
printf("\n Id of child 2: %d",getppid());
}
else
{
wait(NULL);
printf("\n\n Child 2");
printf("\n\n id of Child 2:%d",getpid());
printf("\n\n id of parent 2:%d",getppid());
}
}
else
{
wait(NULL);
printf("\n\n PARENTS\n");
printf("ID of parents: %d\n",getpid());
}
return(0);
}
