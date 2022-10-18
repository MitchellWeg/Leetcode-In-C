project(roman_to_integer)

add_library(roman roman.c)

add_executable(roman_testing tests.c)
target_link_libraries(roman_testing roman)

enable_testing()

add_test(
  NAME roman_testing
  COMMAND $<TARGET_FILE:roman_testing>
)