#include <cmath>
#include <iostream>
#include <string>

#include "config.hpp"

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        // report version
        std::cout << argv[0]
                  << " Version "
                  << LEARN_CMAKE_VERSION_MAJOR << "."
                  << LEARN_CMAKE_VERSION_MINOR << "."
                  << LEARN_CMAKE_VERSION_PATCH << "."
                  << LEARN_CMAKE_VERSION_TWEAK << std::endl;
        std::cout << "Usage: " << argv[0] << " [number]" << std::endl;
        return EXIT_FAILURE;
    }

    double inputValue = std::stod(argv[1]);
    std::cout << sqrt(inputValue);
    return EXIT_SUCCESS;
}
