#include<stdio.h>

int main()
{
    // Static memory allocation
    float Marks[5];        // 20 bytes

    int i = 0;          // Loop Counter

    printf("Enter your marks : \n");

    // Iteration
      
    for(i = 0; i < 5; i++)
    {
        scanf("%f",&Marks[i]);      
    }

    printf("Entered marks are : \n");
    
      
    for(i = 0; i < 5; i++)
    {
        printf("%f\n",Marks[i]);      
    }
    
    return 0;
}
