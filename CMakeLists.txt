cmake_minimum_required(VERSION 3.25.2)
project(Optimizers)

# Add the executable
add_executable(
    main
    src/main.cpp
    src/sgd.cpp
)