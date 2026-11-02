add_executable(test_hello
    test_hello.cpp
)

target_link_libraries(test_hello
    PRIVATE
        robot_simulator_state_estimation_lib
)

add_test(
    NAME test_hello
    COMMAND test_hello
)
