#include "roman.h"
#include <assert.h>

int main() {
  char* test1 = "III";
  char* test2 = "LVIII";
  char* test3 = "MCMXCIV";
  
  assert(romanToInt(test1) == 3);
  assert(romanToInt(test2) == 58);
  assert(romanToInt(test3) == 1994);  
}