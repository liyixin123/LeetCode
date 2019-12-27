//
// Created by lyx on 2019/12/27.
//
#include <vector>

#ifndef LEETCODE_ARRAYTEST_H
#define LEETCODE_ARRAYTEST_H

/*
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 */
int removeDuplicates(std::vector<int> &nums) {
    if (nums.empty())
        return 0;
    int n = nums.size();
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (nums[j] != nums[i]) {
            nums[++j] = nums[i];
        }
    }
    return j + 1;
}

void rotate(std::vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;
int count =0;
    for (int startIndex = 0; count < n; startIndex++) {
        int currentIndex = startIndex;
        int prev = nums[startIndex];
        do {
            int nextIndex = (currentIndex + k) % n;
            int temp = nums[nextIndex];
            nums[nextIndex] =prev;
            prev = temp;
            currentIndex = nextIndex;
            count++;
        } while (currentIndex != startIndex);
    }

}

void removeDuplicatesTest() {
    std::vector<int> nums = {1, 1, 2, 3};
    std::cout << removeDuplicates(nums) << std::endl;
    std::vector<int> num2;
    std::cout << removeDuplicates(num2) << std::endl;
    std::vector<int> num3 = {1};
    std::cout << removeDuplicates(num3) << std::endl;
}

void rotateTest() {
    std::vector<int> nums = {1, 2, 3, 4};
    int k = 2;
    rotate(nums, k);
    for (auto &i:nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    k = 3;
    rotate(nums, k);
    for (auto &i:nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    nums.push_back(5);
    k = 2;
    rotate(nums, k);
    for (auto &i:nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    k = 3;
    rotate(nums, k);
    for (auto &i:nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
};

#endif //LEETCODE_ARRAYTEST_H
