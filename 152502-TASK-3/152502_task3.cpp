#include <iostream>

int main()
{
    int legnth,perimeter,area; // initializing the variables
    std::cout<<"Please enter the legnth of a square: ";// getting input
    std::cin>>legnth;// saving input in variable
    perimeter= 4*legnth;// calculating the perimeter
    area= legnth*legnth;// calculating area
    std::cout<<"The area of the square is: "<<area<<std::endl; //displaying the area
    std::cout<<"The perimeter of the square is: "<<perimeter<<std::endl; // displaying the perimeter

    return 0;
}