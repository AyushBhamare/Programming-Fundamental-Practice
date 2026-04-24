#include<stdio.h>

// This program takes two numbers from user and performs addition using a function

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Ret = 0, A = 0, B = 0;

    printf("Enter first number: ");
    scanf("%d", &A);

    printf("Enter second number: ");
    scanf("%d", &B);

    Ret = Addition(A, B);

    printf("Addition is: %d\n", Ret);
    
    return 0;
}
