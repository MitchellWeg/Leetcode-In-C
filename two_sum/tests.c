#include <assert.h>
#include <stdio.h>

#include "two_sum.h"

void test(int* expected, int* actual) {
  for(int i = 0; i < 2; i++) {
    assert(actual[i] == expected[i]);
}

}int main() {
  int input1[4] = {2,7,11,15};
  int input2[3] = {3,2,4};
  int input3[3] = {3,3};
  
  int* actual1 = two_sum(input1, 4, 9, 0);
  int expected_1[2] = {0, 1};
  test(expected_1, actual1);

  int* actual2 = two_sum(input2, 3, 6, 0);
  int expected_2[2] = {1, 2};
  test(expected_2, actual2);
  
  
  int* actual3 = two_sum(input3, 2, 6, 0);
  int expected_3[2] = {0, 1};
  test(expected_3, actual3);
}
