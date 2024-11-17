cmake_minimum_required(VERSION 3.5)
project(example)

# set standard:
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find packages (SDL2 as example)
find_package(SDL2 REQUIRED)

# include library dirs (SDL2 as example)
include_directories(${SDL2_INCLUDE_DIRS})

# add source files:
set(SOURCES
	src/main.cpp
)

# add headers
set(HEADERS
)

# add executable
add_executable(example ${SOURCES} ${HEADERS})

# link libs (SDL2 as example)
target_link_libraries(example ${SDL2_LIBRARIES})

# Specify the output directory for the binary
set_target_properties(example PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# command to run in root dir:
add_custom_target(run
	COMMAND example
	DEPENDS example
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
	COMMENT "Running example program"
)

