#include <cmath>
#include <iostream>
#include <string>

#include "config.hpp"

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        // report version
        std::cout << argv[0]
                  << " Version "
                  << step1_VERSION_MAJOR << "."
                  << step1_VERSION_MINOR << "."
                  << step1_VERSION_PATCH << "."
                  << step1_VERSION_TWEAK << std::endl;
        std::cout << "Usage: " << argv[0] << " [number]" << std::endl;
        return EXIT_FAILURE;
    }

    double inputValue = std::stod(argv[1]);
    std::cout << sqrt(inputValue);
    return EXIT_SUCCESS;
}
