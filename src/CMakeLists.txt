add_library(calculator_lib
    calculator.cpp
    calculator.h
)

# Create the main executable
add_executable(my_app
    main.cpp
)

# Link the library to the executable
target_link_libraries(my_app PRIVATE calculator_lib)