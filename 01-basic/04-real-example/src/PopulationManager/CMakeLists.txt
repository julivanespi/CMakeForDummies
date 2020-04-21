add_library(
    PopulationManager SHARED
    PopulationManager.h
    PopulationManager.cpp
    )

target_include_directories(PopulationManager PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/PopulationManager)