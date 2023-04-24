#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t mutex;

void *thread(void* arg){
    sem_wait(&mutex);
    printf("Entered thread\n");
    sleep(4);
    printf("Exited thread\n");
    sem_post(&mutex);
}

int main(){
    sem_init(&mutex, 0, 1);
    pthread_t t1, t2;
    pthread_create(&t1, NULL, thread, NULL);
    sleep(2);
    pthread_create(&t2, NULL, thread, NULL);
    if (pthread_join(t1, NULL) != 0) {
        perror("pthread_join");
        return -1;
    }
    if (pthread_join(t2, NULL) != 0) {
        perror("pthread_join");
        return -1;
    }
    sem_destroy(&mutex);
    return 0;
}
