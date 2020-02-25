#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>
#include <pthread.h>
#define NUM_THREADS 8

void *PrintHello(void *threadid) {
    long taskid = (long)threadid;
    sleep(1);
    printf("Hello from thread %ld\n",taskid);
    pthread_exit(NULL);
}
int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;

    for(t=0; t < NUM_THREADS; t++) {
        printf("creating thread %ld\n",t);
        rc =  pthread_create(&threads[t], NULL, PrintHello, (void *) t);
        if (rc) {
            printf("ERROR: return code from pthread_create() is %d\n",rc);
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
