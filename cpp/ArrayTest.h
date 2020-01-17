//
// Created by lyx on 2019/12/27.
//
#include <vector>
#include <map>
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
    int count = 0;
    for (int startIndex = 0; count < n; startIndex++) {
        int currentIndex = startIndex;
        int prev = nums[startIndex];
        do {
            int nextIndex = (currentIndex + k) % n;
            int temp = nums[nextIndex];
            nums[nextIndex] = prev;
            prev = temp;
            currentIndex = nextIndex;
            count++;
        } while (currentIndex != startIndex);
    }

}

void reversal(std::vector<int> &nums, int begin, int end) {
    while (begin < end) {
        int temp = nums[end];
        nums[end] = nums[begin];
        nums[begin] = temp;
        begin++;
        end--;
    }
}

void rotateByReversal(std::vector<int> &nums, int k) {
    k %= nums.size();
    reversal(nums, 0, k - 1);
    reversal(nums, k, nums.size() - 1);
    reversal(nums, 0, nums.size() - 1);


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

void rotateByReversalTest() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 0;


    rotateByReversal(nums, k);
    for (auto &i:nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int maxProfit(std::vector<int> &prices) {
//    int buyVal = 0;
//    bool hasStock = false;
//    int profit = 0;
//
//    for (int i = 0; i < prices.size(); i++) {
//        if (!hasStock) {
//            if (i + 1 < prices.size() && prices[i + 1] > prices[i]) {
//                buyVal = prices[i];
//                hasStock = true;
//            }
//        } else if (hasStock) {
//            if (i + 1 < prices.size()) {
//                if (prices[i + 1] < prices[i]) {
//                    profit += prices[i] - buyVal;
//                    hasStock = false;
//                }
//            } else if (prices[i] > buyVal) {
//                profit += prices[i] - buyVal;
//                hasStock = false;
//            }
//        }
//    }
//
//    return profit;
    int sum = 0;
    int i = 1;
    for (; i < prices.size(); i++) {
        if(prices[i] > prices[i-1])
            sum +=(prices[i] - prices[i-1]);
    }
return sum;
}

void maxProfitTest() {
    std::vector<int> prices2{1, 2, 3, 4, 5};
    std::cout << maxProfit(prices2) << std::endl;
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    std::cout << maxProfit(prices) << std::endl;

}
std::vector<int> intersect1(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> rtn;
    int n1 = nums1.size(); 
    int n2 = nums2.size();

    if (n1 < n2)
    {
        for (int i = 0; i < n1; i++)
        {

        }
    }
    return nums1;
}

void intersectTest()
{

}

void moveZeros(std::vector<int>& nums)
{
    //Á½¸öÖ¸Õë

    int n = nums.size();
  //  if (n <= 1) return;
    int j = 0;
    int i = 0;
    for (; i < n; i++)
    {
        if (nums[i] == 0) continue;
        std::swap(nums[j], nums[i]);
       // nums[j++] = nums[i];
        j++;
    }
    //for (int i = j; i < n; i++)

    //{
    //    nums[i] = 0;
    //}
}


void moveZerosTest()
{
    std::vector<int> nums1 = { 0,1,0,3,12 };
    std::vector<int> nums2 = { 0,0,3,12,1 };
    std::vector<int> nums3 = { 1,0 };
    std::vector<int> nums4 = { 0 };

    std::vector<int> nums5 = { 2,1 };
    moveZeros(nums1);
    moveZeros(nums2);
    moveZeros(nums3);
    moveZeros(nums4);
    moveZeros(nums5);
    for (auto& i : nums1)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (auto& i : nums2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (auto& i : nums3)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (auto& i : nums4)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (auto& i : nums5)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> m_map;
    std::vector<int> rtn;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        auto key = m_map.find(target - nums[i]);
        if (key != m_map.end())
        {
            rtn.push_back(key->second);
            rtn.push_back(i);
            return rtn;
        }

        m_map.insert(std::pair<int, int>(nums[i], i));
    }
    return std::vector<int>();
}

void twoSumTest()
{
    std::vector<int> num = { 2,7,11,15 };
    for (auto& i : twoSum(num, 9))
    {
        std::cout << i << std::endl;
    }
}
#endif //LEETCODE_ARRAYTEST_H
