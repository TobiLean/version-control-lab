#include <iostream>
#include <cmath>

int main(){
    int x, y;
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "the sum of " << x << "and" << y << "is: " << x + y << std::endl;
    std::cout << "the difference of " << x << "and" << y << "is: " << x - y << std::endl;
    std::cout << "Product: " << x * y << std::endl;
    std::cout << "Distance: " <<  abs(x - y) << std::endl;
    std::cout << "Mean average: " << ((double)x+ (double)y)/2.0 << std::endl;
    return 0;
}
