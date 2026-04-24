#include<stdio.h>

// This program demonstrates passing parameters to a function

void Display(int No1, int No2)
{
    printf("%d %d\n", No1, No2);
}

int main()
{
    Display(11, 21);
    return 0;
}
