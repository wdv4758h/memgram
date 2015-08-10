#include <stdlib.h>

int main() {
    for (int i = 0; i < 10; i++) {
        int *ptr = malloc(sizeof(int));
    }
    return 0;
}
