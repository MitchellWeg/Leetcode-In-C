#include <stdlib.h>

#include "two_sum.h"

int* two_sum(int* nums, int numsSize, int target, int* returnSize) {
  int *ans = malloc(sizeof(int) * 2);
  for(int i = 0; i < numsSize; i++) {
    for(int x = i + 1; x < numsSize; x++) {
      if(nums[i] + nums[x] == target) {
          ans[0] = i;
          ans[1] = x;
          return ans;              
      }
    }
  }
  
  return NULL;
}

