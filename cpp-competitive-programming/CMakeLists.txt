project(cpp-competitive-programming)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

file(GLOB SOURCES "src/*.cpp" "problems/*.cpp" "templates/*.cpp")

add_executable(cpp-competitive-programming ${SOURCES})