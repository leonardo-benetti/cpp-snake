add_library(Snake Board.hpp Board.cpp)

add_executable(play main.cpp)

target_link_libraries(play PUBLIC Snake)
