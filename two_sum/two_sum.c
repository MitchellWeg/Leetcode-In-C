#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* nums, int numsSize, int target, int* returnSize) {
  int *ans = malloc(sizeof(int) * 2);
  for(int i = 0; i < numsSize; i++) {
    for(int x = 0; x < numsSize; x++) {
      if(nums[i] + nums[x] == target) {
          ans[0] = i;
          ans[1] = x;
          return ans;              
      }
    }
  }
  
  return NULL;
}

int main() {
  int nums[4] = {2,7,11,15};
  int three_nums[3] = {3,2,4};
  int* ans = two_sum(nums, 4, 9, 0);
  int* three_ans = two_sum(three_nums, 3, 9, 0);
  
  for(int i = 0; i < 2; i++) {
    printf("%d\n", ans[i]);
    printf("three_ans: %d\n", three_ans[i]);
  }
  
  return 0;
}
