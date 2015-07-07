int main () {
    // allocate a lot of stack memory, and then turn it back without using it
    char c[100];
    c[0] = 'a';
    c[7] = 'a';
    return 0;
}
