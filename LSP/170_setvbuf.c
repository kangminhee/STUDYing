#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void ssu_setbuf(FILE *fp, char *buf);

int main(int argc, char *argv[]) {
    char buf[BUFFER_SIZE];
    char *fname = "/dev/pts/6";
    FILE *fp;

    if ((fp = fopen(fname, "w")) == NULL) {
	fprintf(stderr, "fopen error for %s", fname);
	exit(1);
    }

    ssu_setbuf(fp, buf);
    fprintf(fp, "hello, ");

}

void ssu_setbuf(FILE *fp, char *buf) {
    size_t size;
    int fd;
    int mode;

    fd = fileno(fp);

    if (isatty(fd)) {
	    mode = _IOLBF;
    } else {
	    mode = _IOFBF;
    }

    if (buf == NULL) {
	    mode = _IONBF;
	    size = 0;
    }
    else size = BUFFER_SIZE;

    setvbuf(fp, buf, mode, size);
}
