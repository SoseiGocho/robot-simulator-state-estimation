# Library
add_library(robot_simulator_state_estimation_lib
    hello.cpp
)

target_include_directories(robot_simulator_state_estimation_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Executable
add_executable(robot_simulator_state_estimation
    main.cpp
)

target_link_libraries(robot_simulator_state_estimation
    PRIVATE
        robot_simulator_state_estimation_lib
)
