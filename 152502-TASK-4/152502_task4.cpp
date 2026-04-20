
#include <iostream>
#include <cctype> 

int main()
{
    char input; // initializing the variable
    std::cout<<"Please enter your input: ";// getting the input
    std::cin>>input;// saving the input in variable
    if (std::islower(input)) {// checking if the input is in lowercase
        std::cout << input << " is in lowercase"; //printing the output
    } else if (std::isupper(input)) {// checking if the input is in uppercase
        std::cout << input << " is in uppercase"; 
    } else {// if the input is not a letter
        std::cout << input << " is not a letter";
    }


    return 0;
}