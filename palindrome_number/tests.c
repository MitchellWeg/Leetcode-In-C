#include <stdbool.h>
#include <assert.h>

#include "palindrome_number.h"

int main() {
  bool x = is_palindrome(121);
  bool y = is_palindrome(-121);
  bool z = is_palindrome(-10);
   
  assert(x);
  assert(!y);
  assert(!z);

  return 0;
}