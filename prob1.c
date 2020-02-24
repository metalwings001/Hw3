#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h>

void *thread(void *vargp) {
   printf("Hello, World!\n");
}
int main() {
   pthread_t tid;

   pthread_create(&tid, NULL, thread, NULL);
   pthread_join(tid,NULL);
   exit(0);
   return 0;
}

