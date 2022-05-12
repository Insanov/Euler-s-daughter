#include <stdlib.h>

int *buildArray(int *nums, int numsSize, int *returnSize);

int main()
{
    int nums[] = {5, 0, 1, 2, 3, 4};
    int size = (sizeof(nums) / sizeof(int));
    int *ans = malloc(size * sizeof(int));
    ans = buildArray(nums, size, ans);
    free(ans);

    return 0;
}

int *buildArray(int *nums, int numsSize, int *returnSize)
{
    //{nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]};

    for (int i = 0; i < numsSize; i++)
    {
        int tmp = nums[i];
        returnSize[i] = nums[tmp];
    }
    return returnSize;
}