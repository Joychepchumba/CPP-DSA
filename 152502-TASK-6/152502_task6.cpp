
#include <iostream>

int main()
{ 
    //initializing the variables
    int sum = 0;
    int x,average;
    for(int n=0;n<5;n++){ // doing the loop 5 times to get 5 inputs
        std::cout<<"Enter input:  ";
        std::cin>>x;
        sum=sum+x;// doing the sum
    }
    
    average=sum/5;// doing the average
    
    std::cout<<"The average is : "<<average;// printing the output
        

    return 0;
}