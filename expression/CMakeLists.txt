add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)
add_library(expressionlib "${CMAKE_CURRENT_SOURCE_DIR}/expression.c" "${CMAKE_CURRENT_SOURCE_DIR}/expression.h")
target_include_directories(expressionlib PUBLIC "${CMAKE_SOURCE_DIR}/variable")
target_include_directories(expressionlib PUBLIC "${CMAKE_SOURCE_DIR}/expression")
target_include_directories(expressionlib PUBLIC "${CMAKE_SOURCE_DIR}/mem")
