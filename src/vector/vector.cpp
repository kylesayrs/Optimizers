#include "vector.h"


Vector::Vector(int size) {
    // initialize value
    value = std::make_unique<Eigen::VectorXd>(size);
    
    // initialize gradient to be zeros
    grad = std::make_unique<Eigen::VectorXd>(size);
    for (int index = 0; index < size; ++index) {
        grad(i) = 0;
    }
}


int & Vector::operator[](int index) {
    return value[index];
}


Eigen::WithFormat<Eigen::VectorXf> Vector::format(const Eigen::IOFormat format) {
    return value->format(format);
}
