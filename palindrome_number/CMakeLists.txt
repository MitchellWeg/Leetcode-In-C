project(palindrome_number)

add_library(palindrome_number palindrome_number.c)

add_executable(palindrome_number_testing tests.c)
target_link_libraries(palindrome_number_testing palindrome_number)

enable_testing()

add_test(
  NAME palindrome_number_testing
  COMMAND $<TARGET_FILE:palindrome_number_testing>
)