include_directories(../include)
enable_testing()
file(GLOB SRCS *.cpp)
add_executable(MyTest ${SRCS})
target_link_libraries(MyTest MyLib libgtest libgmock)
add_test(MyTest MyTest)
