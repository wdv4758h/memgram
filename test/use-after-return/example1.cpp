void f(int **pptr) {
    int array[42];
    array[0] = 42;
    *pptr = array;
}

int main() {
    int *ptr= nullptr;
    f(&ptr);
    ptr[0] = 99;
    return ptr[0];    // ptr points to an array which is out of scope !!!
}
