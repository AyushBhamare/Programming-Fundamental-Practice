#include<stdio.h>

// This program demonstrates a function returning a value

int Display()
{
    return 11;
}

int main()
{
    int Ret = 0;

    Ret = Display();

    printf("%d\n", Ret);
    
    return 0;
}
