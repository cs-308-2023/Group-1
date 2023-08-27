#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int x, y;
    x = 56;
    y = 98;
    
    int result = gcd(x, y);
    std::cout << "GCD: " << result << std::endl;
    
    return 0;
}
