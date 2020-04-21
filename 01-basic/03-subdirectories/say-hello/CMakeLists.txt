message(STATUS "===== Working on say-hello target =====")

# in this CMakeLists.txt we add the appropriate library calls to say-hello

add_library(
    say-hello SHARED
    src/say-hello/hello.h
    src/say-hello/hello.cpp
)

# here we say where to begin looking for the source files
# we give the target name and say PUBLIC.. idk why yet.
target_include_directories(say-hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)