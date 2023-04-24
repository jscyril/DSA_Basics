#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

int main()
{
    char *fifo_path = "/tmp/myfifo";
    int fifo_fd = 0;
    char message[256];

    // Create the FIFO (named pipe) if it doesn't exist
    mkfifo(fifo_path, 0666);

    // Open the FIFO for writing
    fifo_fd = open(fifo_path, O_WRONLY);

    // Write some data to the FIFO
    sprintf(message, "Hello from process 1!");
    write(fifo_fd, message, strlen(message) + 1);

    // Wait for a response from the receiver
    read(fifo_fd, message, sizeof(message));
    printf("Process 1 received response: %s\n", message);

    // Clean up
    close(fifo_fd);
    unlink(fifo_path);

    return 0;
}
