#include <iostream>
#include <Eigen/Dense>

#include "vector.h"


int main(int argc, char **argv) {
    printf("Hello world\n");

    // Printing
    Eigen::IOFormat CleanFmt(3, 0, ", ", "\n", "[", "]");

    // Initialize some parameters
    Vector::Ptr parameters = std::make_unique<Vector>(2);
    parameters.get()[0] = 0;
    parameters.get()[0] = 0;
    //std::cout << parameters->format(CleanFmt) << std::endl;

    // Create critic

    // calculate gradient
    //sin_backwards()

    // perform optimizer step 

    return 0;
}
