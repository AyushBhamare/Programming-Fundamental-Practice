#include <stdio.h>

// Structure declaration
struct Demo
{
    int i;      // 4 bytes (integer)
    float f;    // 4 bytes (float)
};              // Total expected size: 8 bytes (no padding required)

int main()
{
    // Create structure object
    struct Demo dobj;

    // sizeof() returns the total memory allocated to the structure
    printf("Size of structure Demo: %lu bytes\n", sizeof(dobj));

    return 0;
}
