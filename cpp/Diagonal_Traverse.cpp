/*
 * @Author: liyixin
 * @Date: 2021-03-10 13:43:36
 * @LastEditTime: 2021-03-10 14:22:37
 * @LastEditors: liyixin
 * @Description:
 * @FilePath: \LeetCode-master\cpp\Diagonal_Traverse.cpp
 *
 */
#include <iostream>
#include <iterator>
#include <vector>

class Solution
{
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& matrix)
    {
        if (matrix.empty() || matrix[0].empty())
            return {};
        //row.sum
        const int m = matrix.size();
        //col.sum
        const int n = matrix[0].size();
        std::vector<int> out(m * n);

        int row = 0;
        int col = 0;
        //dirs 表示两种情况，0往右上角移动 1： 往左下角移动
        std::vector<std::vector<int>> dirs{{ -1, 1 }, { 1, -1 }};
        int k = 0; //k表示是朝右上，还是左下
        for (int i = 0; i < m * n; ++i)
        {
            out[i] = matrix[row][col];
            row += dirs[k][0];
            col += dirs[k][1];
            //越界判断
            //如果下面越界，row重置为边界，col + 2
            if (row >= m)
            {
                row = m - 1;
                col += 2;
                k = 1 - k;
            }
            //右上越界同理
            if (col >= n)
            {
                col = n - 1;
                row += 2;
                k = 1 - k;
            }
            //其他情况
            if (row < 0)
            {
                row = 0;
                k = 1 - k;
            }
            if (col < 0)
            {
                col = 0;
                k = 1 - k;
            }

        }
        return out;
    }
};
int main()
{
    std::vector<int> m1;
    m1.push_back(1);
    m1.push_back(2);
    m1.push_back(3);
    std::vector<std::vector<int>> matrix;
    matrix.push_back(m1);
    m1.clear();
    m1.push_back(4);
    m1.push_back(5);
    m1.push_back(6);
    matrix.push_back(m1);
    m1.clear();
    m1.push_back(7);
    m1.push_back(8);
    m1.push_back(9);
    matrix.push_back(m1);
    Solution s;

    for (auto& val: s.findDiagonalOrder(matrix))
    {
        std::cout << val << std::endl;
    }
    return 0;
}
