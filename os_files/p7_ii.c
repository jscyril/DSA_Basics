#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
int main()
{
    FILE *fp;
    pid_t pid = fork();
    if (pid > 0)
    {
        printf("My process id = %d\n", getpid());
        exit(0);
    }
    umask(0);
    fp = fopen("Filename.txt", "w+");
    while (1)
    {
        sleep(3);
        fprintf(fp, "Welcome to 2BCA-A\n");
        fflush(fp);
    }
    fclose(fp);
    return 0;
}

