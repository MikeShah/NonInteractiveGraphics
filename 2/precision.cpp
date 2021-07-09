// @file precision.cpp
// Be careful when comparing floats
#include <iostream>
#include <cmath>

int main(){
    // Create two variables
    double a = 1.9285385;
    double b = 1.9285385;

    // Error margin
    double epsilon= .000001;

    std::cout << "Experiment 1--nothing fancy" << std::endl;
    if(a==b){
        std::cout << "Yes they are equal of course!" << std::endl;
        std::cout << "\ta=" << a << std::endl;
        std::cout << "\tb=" << b << std::endl;
    }

    if( std::abs(a-b) < epsilon){
        std::cout << "Yes they are equal when we consider precision!" << std::endl;
        std::cout << "\ta=" << a << std::endl;
        std::cout << "\tb=" << b << std::endl;
    }


    std::cout << "\nExperiment 2--repeated multiplication" << std::endl;
    a = .1*11;
    b = 0;
    for(int i=0; i < 11; i++){
        b += .1;
    }

    if(a==b){
        std::cout << "Yes they are equal of course!" << std::endl;
        std::cout << "\ta=" << a << std::endl;
        std::cout << "\tb=" << b << std::endl;
    }else{
        std::cout << "Not equal??" << std::endl;
        std::cout << "\ta=" << a << std::endl;
        std::cout << "\tb=" << b << std::endl;
    }

    if( std::abs(a-b) < epsilon){
        std::cout << "Yes they are equal when we consider precision!" << std::endl;
        std::cout << "\ta=" << a << std::endl;
        std::cout << "\tb=" << b << std::endl;
    }

        std::cout << "a=" << a << std::endl;
        std::cout << "b=" << b << std::endl;
}
