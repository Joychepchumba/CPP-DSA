
#include <iostream>
#include <cmath>

int radius;// initializing the variables
float volume;

int main()
{
    const double PI = 3.142;//setting pie as a constant
	std::cout << "Hello.Please input the radius:  ";// getting the input
    std::cin>>radius; // saving the input in variable
    volume= 4.0/3 * pow(radius,3)* PI;// calculating the volume by using the formula 4/3*pie*radius^3
    
    std::cout<<"The volume is:  "<<volume;// printing the output
    

    return 0;
}