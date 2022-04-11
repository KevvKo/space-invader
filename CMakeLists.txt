# version
cmake_minimum_required( VERSION 3.16 )

#project name
project( space-invalder VERSION 0.0.1 )
 
# include
include_directories( src )

# target
add_executable( space-invader main.cpp ./src/game.cpp) 
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

target_link_libraries( space-invader ${SDL2_IMAGE_LIBRARIES} )

# copy all necessary assets
file(COPY src/assets DESTINATION ${CMAKE_BINARY_DIR})

# add SDL2
find_package(SDL2 REQUIRED)
target_link_libraries( space-invader ${SDL2_LIBRARIES})

# add SDL2
find_package(SDL2_image REQUIRED)
target_link_libraries( space-invader ${SDL2_IMAGE_LIBRARIES} )