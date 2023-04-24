#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_BUF 1024

int main() {
    int fd;
    char *fifo = "/tmp/myfifo";
    char buf[MAX_BUF];
    // Create the FIFO if it doesn't already exist
    mkfifo(fifo, 0666);
    // Open the FIFO for writing
    fd = open(fifo, O_WRONLY);
    // Write a message to the FIFO
    write(fd, "Hello from the writer!", sizeof("Hello from the writer!"));
    // Close the FIFO
    close(fd);
    return 0;
}
