#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
int main()
{
char *fifo_path = "/tmp/myfifo";
int fifo_fd = 0;
char message[256];
// Open the FIFO for reading
fifo_fd = open(fifo_path, O_RDONLY);
// Read the data from the FIFO
read(fifo_fd, message, sizeof(message));
printf("Process 2 received message: %s\n", message);
// Send a response back to the sender
sprintf(message, "Hello from process 2!");
write(fifo_fd, message, sizeof(message));
// Clean up
close(fifo_fd);
unlink(fifo_path);
return 0;
}