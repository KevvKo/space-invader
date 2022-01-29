# version
cmake_minimum_required( VERSION 3.16 )

#project name
project( space-invalder VERSION 0.0.1 )
 
# include
include_directories( include src )
find_package(SDL2 REQUIRED)

# target
add_executable( space-invader main.cpp ./src/game.cpp) 

target_link_libraries( space-invader ${SDL2_LIBRARIES})