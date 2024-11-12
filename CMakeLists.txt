cmake_minimum_required(VERSION 3.10)

project(code_editor)

find_package(Curses REQUIRED)
set(SOURCE_DIR "src")

file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cpp")
# Include the ncurses headers
include_directories(${CURSES_INCLUDE_DIRS})
add_executable(code_editor ${SOURCES})
# Link the ncurses library
target_link_libraries(code_editor ${CURSES_LIBRARIES})

