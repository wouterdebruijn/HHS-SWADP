cmake_minimum_required(VERSION 3.0.0)
project(HHSSWADP VERSION 0.1.0)

add_subdirectory(inc)

add_executable(HHSSWADP main.cpp)

target_link_libraries(HHSSWADP PUBLIC Observer Subject DigitalMeter AnalogMeter Car Speed)

target_include_directories(HHSSWADP PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/inc"
                          )