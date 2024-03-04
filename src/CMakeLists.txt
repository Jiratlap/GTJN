add_library(node node.cpp)
add_library(linked_list linked_list.cpp)
target_link_libraries(linked_list PRIVATE node)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE node linked_list)
