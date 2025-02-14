#include <cmath>
#include <iostream>
#include <string>

#include "config.hpp"

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        // report version
        std::cout << argv[0]
                  << " Version "
                  << LearnCMake_VERSION_MAJOR << "."
                  << LearnCMake_VERSION_MINOR << "."
                  << LearnCMake_VERSION_PATCH << "."
                  << LearnCMake_VERSION_TWEAK << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return EXIT_FAILURE;
    }

    double inputValue = std::stod(argv[1]);
    std::cout << sqrt(inputValue);
    return EXIT_SUCCESS;
}
