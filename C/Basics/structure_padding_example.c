#include <stdio.h>

// Structure declaration
struct Demo
{
    int i;      // 4 bytes
    char ch;    // 1 byte

    // Compiler adds 3 bytes padding here
    // to align the next member (float) to a 4-byte boundary

    float f;    // 4 bytes
};              // Total size = 12 bytes

int main()
{
    // Create structure object
    struct Demo dobj;

    // sizeof() returns total memory including padding
    printf("Size of structure Demo: %lu bytes\n", sizeof(dobj));

    return 0;
}
