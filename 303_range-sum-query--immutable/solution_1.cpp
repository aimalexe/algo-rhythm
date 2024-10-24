#include <vector>
#include <iostream>

class NumArray {
private:
    std::vector<int> prefixSum;
    
public:
    // Constructor to initialize the prefix sum array
    NumArray(std::vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);
        for (int i = 0; i < n; ++i) 
            prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    
    // Function to return the sum of elements between indices left and right (inclusive)
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

// Test case for C++ solution
int main() {
    std::vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(nums);
    std::cout << numArray.sumRange(0, 2) << std::endl;  // Output: 1
    std::cout << numArray.sumRange(2, 5) << std::endl;  // Output: -1
    std::cout << numArray.sumRange(0, 5) << std::endl;  // Output: -3
    return 0;
}
