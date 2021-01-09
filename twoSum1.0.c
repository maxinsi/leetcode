#include<stdlib.h>
#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
* 使用两遍for循环暴力求解
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	
	for (int i = 0; i < numsSize; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i]+nums[j]==target) {
				int* ret = malloc(sizeof(int) * 2);
				ret[0] = i; ret[1] = j;
				*returnSize = 2;
				return ret;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}

void twoSumTest() {
	int nums[4] = { 2,7,11,15 };
	int target = 9;
	int i = 2;
	int* returnSize=&i;
	int* ret = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, returnSize);
	printf("%d %d", ret[0], ret[1]);
}
