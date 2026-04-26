#include <stdio.h>

// Disable padding (compiler-specific directive)
#pragma pack(1)

struct Demo
{
    int i;      // 4 bytes
    char ch;    // 1 byte
    float f;    // 4 bytes
};              // Total = 9 bytes (no padding)

// Restore default alignment (good practice)
#pragma pack()

int main()
{
    struct Demo dobj;

    // sizeof() now excludes padding due to packing
    printf("Size of structure Demo: %lu bytes\n", sizeof(dobj));

    return 0;
}
