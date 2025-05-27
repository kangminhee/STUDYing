#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    int n, f, res;
    scanf("%d%d", &n, &f);
    n = n/100*100;
    res = f - n%f;
    if (res == f) printf("00\n");
    else printf("%02d\n", res);
    return 0;
}