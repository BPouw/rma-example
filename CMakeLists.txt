cmake_minimum_required(VERSION 3.27)
project(RMA_example)

set(CMAKE_CXX_STANDARD 17)

# Add your executable
add_executable(RMA_example main.cpp)

# Find and link against OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(RMA_example PRIVATE ${OpenCV_LIBS})

add_library(potato_library STATIC
        libs/potato-library/PotatoClassifier.cpp
        libs/potato-library/PotatoClassifier.h
        libs/potato-library/Prediction.cpp
        libs/potato-library/Prediction.h
        libs/potato-library/PotatoClass.cpp
        libs/potato-library/PotatoClass.h)

target_include_directories(RMA_example PRIVATE libs/potato-library)

target_link_libraries(RMA_example PRIVATE potato_library)