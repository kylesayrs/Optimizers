# set up project
cmake_minimum_required(VERSION 3.25.2)
project(Optimizers)
set (CMAKE_CXX_STANDARD 14)

# include libraries
find_package (Eigen3)

# create executable
add_executable(
    main
    src/main.cpp
)

# link libraries
target_link_libraries(
    main
    Eigen3::Eigen
)


# includes
target_include_directories(
    main
    PUBLIC
        src/vector/include
)