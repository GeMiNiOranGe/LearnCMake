#include <iostream>
#include <cmath>
#include <string>

int main(int argc, char const *argv[]) {
    double inputValue = std::stod(argv[1]);
    std::cout << sqrt(inputValue);
    return EXIT_SUCCESS;
}
