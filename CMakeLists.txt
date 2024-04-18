# set up project
cmake_minimum_required(VERSION 3.25.2)
project(Optimizers)

# include libraries
find_package (Eigen3)

# create executable
add_executable(
    main
    src/main.cpp
    src/sgd.cpp
)

# link libraries
target_link_libraries(
    main
    Eigen3::Eigen
)
