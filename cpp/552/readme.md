## 题目
[552. 学生出勤记录 II - 力扣（LeetCode）](https://leetcode-cn.com/problems/student-attendance-record-ii/)
## 思路
根据输入的长度随机生成出勤记录，统计满足条件（合格）的数量
### Example 1:
```
Input: n = 2
Output: 8
Explanation: There are 8 records with length 2 that are eligible for an award:
"PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL"
Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2).
```
### Example 2:
```
Input: n = 1
Output: 3
```
### Example 3:
```
Input: n = 10101 
Output: 183236316
```
### Constraints
* `1 <=n <= 10^5`

