01-basic HelloWorld

# Single Source File Example

### File listing
```
.
├── build
├── CMakeLists.txt
├── file_structure.txt
├── main.cpp
└── README.md

1 directory, 4 files
```

### Take away
At the root level of the project, there will always be a CMakeLists.txt file. For this example, we define the important things:
* cmake minimum version
* project name
* adding executable

``` cmake 
# cmake_minimum_required is always needed in every cmake file.
cmake_minimum_required(VERSION 3.13.4)

# the following command allows the developer to give the project a name, and version number if desired.
project(HelloWorld)

# the following line tells cmake that we are adding a executable.
# the exe is given a target name ex. HelloWorld
# after providing a target name, we give it the source to compile ex. main.cpp
add_executable(HelloWorld main.cpp)
```


