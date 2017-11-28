project(NEURAL_NETWORK)

set(NEURAL_NETWORK_VERSION_MAJOR 0)
set(NEURAL_NETWORK_VERSION_MINOR 1)

add_compile_options(-g)
add_compile_options(-std=c++11)

include_directories(src/main/node src/main/network)
add_library(NODE src/main/node/node.cpp)
add_library(NETWORK src/main/network/network.cpp)

add_executable(out src/main/index.cpp)
target_link_libraries(out NODE NETWORK)