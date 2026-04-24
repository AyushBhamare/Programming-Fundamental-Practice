#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;

    printf("%d\n",no);              // 11
    printf("%d\n",&no);             // Address of no for Ex(100)
    printf("%d\n",p);               // Address of no(100)
    printf("%d\n",*p);              // Value of no(11) 
    printf("%d\n",sizeof(no));      // 4
    printf("%d\n",sizeof(p));       // 8
    printf("%d\n",sizeof(*p));      // 4 
    
    return 0;
}
