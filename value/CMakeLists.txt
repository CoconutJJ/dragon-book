add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)

add_library(valuelib "${CMAKE_CURRENT_SOURCE_DIR}/value.c" "${CMAKE_CURRENT_SOURCE_DIR}/value.h")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/variable")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/definition")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/mem")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/expression")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/map")
target_include_directories(valuelib PUBLIC "${CMAKE_SOURCE_DIR}/linked_list")
