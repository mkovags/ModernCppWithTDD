project(Soundex)
set(CMAKE_CXX_STANDARD 17)
set(This Soundex)

enable_testing()

set(Headers
        Soundex.h
        )

set(Sources
        main.cpp
        Soundex.cpp)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)