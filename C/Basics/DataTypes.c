//Demonstrates different data types and printing in C
//char,int,float,double

#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    printf("Values of all variables\n");
    
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    return 0;
}
