#include <stdio.h>

// Disable padding (1-byte alignment)
#pragma pack(1)

struct Demo
{
    int i;      // 4 bytes
    char ch;    // 1 byte (no padding added after this)
    float f;    // 4 bytes
};              // Total size = 9 bytes (packed, no padding)

// Restore default alignment
#pragma pack()

int main()
{
    struct Demo dobj;

    // Assign values
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 10.0f;

    // Display values
    printf("%d\n", dobj.i);   // 11
    printf("%c\n", dobj.ch);  // A
    printf("%f\n", dobj.f);   // 10.000000

    return 0;
}
