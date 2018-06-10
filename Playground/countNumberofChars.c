#include <stdio.h>

int main(void) {
    long count;
    while(getchar() != EOF) {
        ++count;
    }

    printf("%ld\n", count);
    return 0;
}