#include "std_lib_facilities.h"
#include "quadratic.h"

//main function for executing the quadratic and printing
int main()
{
    cout<<"The quadratic equations are of the form ax^2+bx+c = 0 \n";
    
    int a;
    int b;
    int c;

    cout<<"Please enter the values of a, b and c by inputting the values\nand separating them by pressing the \"enter\" key:\n";
    
    cin>>a>>b>>c;
    
    quadratic(a,b,c);
    
    return 0;
}