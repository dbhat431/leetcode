#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {
    // Sort the array using qsort
    qsort(nums, numsSize, sizeof(int), compare);
    
    // The majority element is at the middle of the sorted array
    return nums[numsSize / 2];
}
