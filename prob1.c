#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>
#include <pthread.h>

void *thread(void *vargp) {
   printf("Hello, World!\n");
}
int main(int argc, char* argv[]) {
   pthread_t tid;
   int numThreads;
   
   if(argv[1] != '\0') {
      numThreads = atoi(argv[1]);
      printf("numThreads: %d\n",numThreads);
   }
   for(int i = 0; i < numThreads; ++i){
      pthread_create(&tid, NULL, thread, NULL);
   }
   pthread_join(tid,NULL);
   exit(0);
   return 0;
}

