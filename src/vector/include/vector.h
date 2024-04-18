#include <Eigen/Dense>
#include <Eigen/src/Core/IO.h>


class Vector {
    public:
        using Ptr = std::shared_ptr<Vector>;

        Vector(int size);

        int & operator[](int index);
        Eigen::WithFormat<Eigen::VectorXf> format(const Eigen::IOFormat format);

        std::unique_ptr<Eigen::VectorXf> value;
        std::unique_ptr<Eigen::VectorXf> grad;
    private:
};
