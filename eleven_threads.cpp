#include <iostream>
#include <pthread.h>
#include <string.h>
using std::cout;
using std::endl;
using std::string;

#define N_THREADS   10
#define N_SIZE      100000000

int *n;
const int RANGE = N_SIZE / N_THREADS;
pthread_t tid[N_THREADS];

void* fill(void* arg) {
    int stop = *((int *) arg);
    int start = stop - RANGE;
    int i;

    for (i = start; i < stop; i++) {
        n[i] = i;
    }

    return NULL;
}

int main(int argc, char **argv) {
    n = new int[N_SIZE];
    string flag;
    int i;

    for (i = 0; i < N_THREADS; i++) {
        int nCeil = (((i + 1) * N_SIZE) / N_THREADS);

        pthread_create(&(tid[i]), NULL, fill, &nCeil);
    }

    for (i = 0; i < N_THREADS; i++) {
        pthread_join(tid[i], NULL);
    }

    if (argc > 1)
        flag = argv[1];

    delete [] n;

    return 0;
}