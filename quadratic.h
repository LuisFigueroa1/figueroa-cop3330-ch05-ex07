/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Figueroa
 */

#include "std_lib_facilities.h"

void quadratic(int a, int b, int c)
{
    double root1;
    double root2;
    //operation for the discriminant
    int discriminant = (b * b)-(4 * a * c); 

    //if cases to determine if the discriminant is real or not
    if (discriminant> 0) //less than 0(different roots)
    {
        root1 = ((double)(-b + sqrt(discriminant))/(2*a));
        root2 = ((double)(-b - sqrt(discriminant))/(2*a));
        
        cout<<"The roots are real and they are x1 =  "<<root1<<" x2 = "<<root2;
    }

    else if(discriminant == 0) //equals than 0(same root)
    {
        root1 = ((double)(-b + sqrt(discriminant))/(2*a));

        cout<<"The roots are real and they are x1,2 = "<<root1;
    }

    else //error
    {
        cerr<<"Error: The roots are not real as the discriminant is less than 0";
    }
} 