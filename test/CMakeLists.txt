add_executable(hello_test hello_test.cpp)
target_link_libraries(hello_test GTest::gtest_main)

add_executable(tuple_test tuple_test.cpp ../src/tuple.cpp)
target_link_libraries(tuple_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test tuple_test)
