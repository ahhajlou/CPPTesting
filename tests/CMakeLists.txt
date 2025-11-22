# Create test executable
add_executable(calculator_tests
    calculator_test.cpp
)

# Link against gtest, gtest_main, and your library
target_link_libraries(calculator_tests
    PRIVATE
    gtest
    gtest_main
    calculator_lib
)

# Include the src directory so tests can find headers
target_include_directories(calculator_tests PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Add tests to CTest
include(GoogleTest)
gtest_discover_tests(calculator_tests)