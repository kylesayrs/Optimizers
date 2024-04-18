#include <iostream>
#include <Eigen/Dense>

#include "vector/vector.h"


int main(int argc, char **argv) {
    printf("Hello world\n");

    // Printing
    Eigen::IOFormat CleanFmt(3, 0, ", ", "\n", "[", "]");

    // Initialize some parameters
    std::unique_ptr<Eigen::VectorXd> parameters = std::make_unique<Eigen::VectorXd>(10);
    *parameters << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;
    std::cout << parameters->format(CleanFmt) << std::endl;

    // Create critic

    // calculate gradient
    //sin_backwards()

    // perform optimizer step 

    return 0;
}
