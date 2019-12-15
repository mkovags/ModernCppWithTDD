cmake_minimum_required(VERSION 3.10)

set(This SoundexTests)

set(Sources
        ut_Soundex.cpp)

add_executable(${This} ${Sources})
include_directories(
        ..
)
target_link_libraries(${This} PUBLIC
    gtest_main
    gtest
    pthread
    Soundex
)

add_test(
        NAME ${This}
        COMMAND ${This}
)