#include <stdlib.h>

int *getConcatenation(int *nums, int numsSize, int *returnSize);

int main()
{
    int nums[] = {1, 2, 1, 2, 1};
    int size = sizeof(nums);
    int *ans = malloc(size * 2);
    ans = getConcatenation(nums, size, ans);
    return 0;
}

int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    int real_size = numsSize / sizeof(int);
    for (int i = 0; i < real_size; i++)
    {
        returnSize[i] = nums[i];
        returnSize[i + real_size] = nums[i];
    }

    return returnSize;
}