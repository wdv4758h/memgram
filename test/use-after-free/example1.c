// from https://code.google.com/p/address-sanitizer/wiki/ExampleUseAfterFree

int main(int argc, char **argv) {
    int *array = new int[100];
    delete [] array;
    return array[argc];    // BOOM
}
