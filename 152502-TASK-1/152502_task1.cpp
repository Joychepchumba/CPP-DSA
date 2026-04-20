
#include <iostream>

int days, seconds;// Initializing the variables

int main()
{
    std::cout<<"Hello. Please enter your number of days"; // getting the input
    std::cin>>days;
    seconds = days * 24 *60*60; // calculating  second by multiplying the days with hours, minutes and seconds
    
	std::cout << "Number of seconds is:" << seconds;// printing the output

    return 0;
}