#include <Eigen/Dense>


class Vector {
    public:
        using Ptr = std::shared_ptr<Vector>;

        Vector(int size);

        int & operator[](int index);

        std::unique_ptr<Eigen::VectorXf> value;
        std::unique_ptr<Eigen::VectorXf> grad;
    private:
};
