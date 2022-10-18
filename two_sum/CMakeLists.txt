project(leetcode)

add_library(two_sum two_sum.c)

add_executable(two_sum_testing tests.c)
target_link_libraries(two_sum_testing two_sum)

enable_testing()

add_test(
  NAME two_sum_testing
  COMMAND $<TARGET_FILE:two_sum_testing>
)