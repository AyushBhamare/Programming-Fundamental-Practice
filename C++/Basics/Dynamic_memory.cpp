#include<iostream>
using namespace std;

int main()
{
    int Size = 0;
    float *Marks = NULL;
    int i = 0;          // Loop Counter

    cout<<"Enter number of elements : \n";
    cin>>Size;

    // Dynamic memory allocation
    Marks = new float[Size];
    
    cout<<"Enter your marks : \n";

    // Iteration  
    for(i = 0; i < Size; i++)
    {
        cin>>Marks[i];      
    }

    cout<<"Entered marks are : \n";
    
    
    for(i = 0; i < Size; i++)
    {
        cout<<Marks[i]<<"\n";      
    }

    delete [] Marks;
    
    return 0;
}
