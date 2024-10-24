#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* prefixSum;
    int size;
} NumArray;

// Function to initialize the NumArray structure
NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj = (NumArray*)malloc(sizeof(NumArray));
    obj->size = numsSize;
    obj->prefixSum = (int*)malloc((numsSize + 1) * sizeof(int));
    obj->prefixSum[0] = 0;
    for (int i = 0; i < numsSize; i++) {
        obj->prefixSum[i + 1] = obj->prefixSum[i] + nums[i];
    }
    return obj;
}

// Function to calculate the sum of a range in the array
int numArraySumRange(NumArray* obj, int left, int right) {
    return obj->prefixSum[right + 1] - obj->prefixSum[left];
}

// Function to free the memory used by NumArray
void numArrayFree(NumArray* obj) {
    free(obj->prefixSum);
    free(obj);
}

// Test case for C solution
int main() {
    int nums[] = {-2, 0, 3, -5, 2, -1};
    NumArray* numArray = numArrayCreate(nums, 6);
    printf("%d\n", numArraySumRange(numArray, 0, 2));  // Output: 1
    printf("%d\n", numArraySumRange(numArray, 2, 5));  // Output: -1
    printf("%d\n", numArraySumRange(numArray, 0, 5));  // Output: -3
    numArrayFree(numArray);
    return 0;
}
