#include <vector>
#include <cstdio>

int main () {
    // allocate a lot of heap memory, and then free without actually using it (initialized)
    std::vector<int> x (100, 0);
    printf("%lu\n", x.capacity());
    return 0;
}
