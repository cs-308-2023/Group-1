#include <iostream>
#include "functions.h"

int main() {
    int x, y;
    x = 56;
    y = 98;
    
    int result = gcd(x, y);
    std::cout << "GCD: " << result << std::endl;
    
    return 0;
}
