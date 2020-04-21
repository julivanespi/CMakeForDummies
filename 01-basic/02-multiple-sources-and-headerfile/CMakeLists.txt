cmake_minimum_required(VERSION 3.13)

project(HelloWord2)

# in this example, we are adding a library called say-hello
# this is a bit confusing at first because when I think of a library, I think of like another lib<name>.so
# or in java, a another jar that I include in my netbeans project. In this case, our source code that isn't the main.cpp
# is a library so to speak. 

# add_library takes a first arg as the target name for the lib
# optional to specify as a STATIC/SHARED/MODULE, by defualt it will pick static.
# following are the files associated to the lib, in this case it will be hello.h and hello.cpp
add_library(
    say-hello SHARED
    hello.h
    hello.cpp
)

# we still call the add_executable line here, which points to the main.cpp
add_executable(HelloWorld2 main.cpp)

# finally we add the following command.
# target_link_lbraries will take the exe target name first as a arg.
# second arg will be weather it is PRIVATE/SHARED.
# third arg will be the library target name
target_link_libraries(HelloWorld2 PRIVATE say-hello)