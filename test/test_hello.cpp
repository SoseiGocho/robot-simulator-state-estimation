#include "robot_simulator_state_estimation/hello.hpp"

#include <iostream>

int main()
{
    const auto result = robot_simulator_state_estimation::hello();

    if (result != "Hello") {
        std::cerr
            << "Test failed: unexpected result: "
            << result
            << std::endl;
        return 1;
    }

    std::cout << "Test passed" << std::endl;
    return 0;
}
