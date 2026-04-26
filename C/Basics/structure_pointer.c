#include <stdio.h>

// Disable padding (1-byte alignment)
#pragma pack(1)

struct Demo
{
    int i;      // 4 bytes
    char ch;    // 1 byte (no padding)
    float f;    // 4 bytes
};              // Total size = 9 bytes

// Restore default alignment
#pragma pack()

int main()
{
    struct Demo dobj;
    struct Demo *ptr = NULL;

    // Assign address of structure to pointer
    ptr = &dobj;

    // Access members using pointer (-> operator)
    ptr->i = 11;
    ptr->ch = 'A';
    ptr->f = 10.0f;

    // Print values
    printf("%d\n", ptr->i);   // 11
    printf("%c\n", ptr->ch);  // A
    printf("%f\n", ptr->f);   // 10.000000

    return 0;
}
