#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *print_hello(void *arg) {
printf("Hello from thread %ld\n", (long)arg);
pthread_exit(NULL);
}
int main() {
pthread_t thread_id;
int rc;
// create a new thread
rc = pthread_create(&thread_id, NULL, print_hello, (void *)1);
if (rc) {
printf("ERROR; return code from pthread_create() is %d\n", rc);
exit(-1);
}
// wait for the thread to complete
rc = pthread_join(thread_id, NULL);
if (rc) {
printf("ERROR; return code from pthread_join() is %d\n", rc);
exit(-1);
}
printf("Thread %ld has completed\n", (long)thread_id);
pthread_exit(NULL);
}