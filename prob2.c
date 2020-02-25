#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>
#include <pthread.h>

void *thread(void *vargp) {
    sleep(1);
    printf("Hello, World!\n");
    return null;
}
int main() {
    pthread_t tid;
    
    pthread_create(&tid, NULL, thread, NULL);
    exit(0);
    return 0;
}
