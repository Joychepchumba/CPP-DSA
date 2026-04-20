#include <iostream>

int main()
{
    //initializing the variables
    double x =0;
    int y= 20;
    
    do{ // doing the repeat loop until y is less than 6
        y=y-4; //decreasing y 
        x=2.0/y +x; // increasing x.
    }while(!(y<6));
    std::cout<<"The value of x is: "<<x; // printing the output
    return 0;
}