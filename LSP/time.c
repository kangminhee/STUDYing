#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    struct timespec start, end;
    long execution_ns;
    double execution_sec;

    if (clock_gettime(CLOCK_MONOTONIC, &start) == -1) {
	    perror("clock_gettime start");
	    return 1;
    }

    for (volatile int i = 0; i < 100000000; i++);

    if (clock_gettime(CLOCK_MONOTONIC, &end) == -1) {
	    perror("clock_gettime end");
	    exit(1);
    }
    execution_ns = (end.tv_sec - start.tv_sec) * 1000000000L + (end.tv_nsec - start.tv_nsec);
    execution_sec = execution_ns / 1e9;

    printf("Execution time: %ld ns\n", execution_ns);
    printf("Execution time: %.9f sec\n", execution_sec);

    return 0;
}
