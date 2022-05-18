add_library(Snake Board.hpp Board.cpp Game.hpp Game.cpp Apple.hpp Apple.cpp)

add_executable(play main.cpp)

target_link_libraries(play PUBLIC Snake)
