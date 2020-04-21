message(STATUS "===== Working on HelloWorld3 target =====")
# we still call the add_executable line here, which points to the main.cpp
add_executable(HelloWorld3 main.cpp)

# finally we add the following command.
# target_link_lbraries will take the exe target name first as a arg.
# second arg will be weather it is PRIVATE/SHARED.
# third arg will be the library target name
target_link_libraries(HelloWorld3 PRIVATE say-hello)