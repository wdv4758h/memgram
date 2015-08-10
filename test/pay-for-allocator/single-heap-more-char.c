#include <stdlib.h>

int main () {
    // allocate a lot of heap memory, and then free without using it
    // and here may pay some heap memory for memory allocator
    char* c = malloc(sizeof(char) * 100);
    c[0] = 'a';
    c[7] = 'z';
    free(c);
    return 0;
}
