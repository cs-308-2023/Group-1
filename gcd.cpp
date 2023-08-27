#include <iostream>
#include "functions.h"

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int result = gcd(num1, num2);
    cout<<result<<endl;

    return 0;
}