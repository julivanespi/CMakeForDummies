cmake_minimum_required(VERSION 3.13)

# in this example we have a little bit more complexity. we have a couple sub-directories and
# CMakeLists.txt files. The actual program executes the same code, but it is structured a little
# bit differently. The entry point of the program is located in the hello-exe directory. The 
# say-hello library is located in the say-hello directory.

project(PopulationProjector)

# it is important to add the library directories before you add the exe directory
# since the hello exe directory depends on say-hello to be built first
add_subdirectory(src)