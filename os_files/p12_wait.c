#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
if (fork()== 0)
printf("FROM CHILD\n");
else
{
printf("FROM PARENT\n");
wait(NULL);
printf("CHILD TERMINATED\n");
}
printf("Bye\n");
return 0;
}