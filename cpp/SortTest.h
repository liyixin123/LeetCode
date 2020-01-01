//
// Created by lyx on 2020/1/1.
//

#ifndef LEETCODE_SORTTEST_H
#define LEETCODE_SORTTEST_H

void sortInsertion(std::vector<int> &a)
{
    int n = a.size();
    if (a.size() <= 1)
        return;
    for (int j = 1; j < n; j++)
    {
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}
void merge(std::vector<int> &a, int const begin,int const mid, int const end)
{


}

void mergeSort(std::vector<int> &a, int const begin, int const end)
{

}



void sortTest()
{

    std::vector<int> a = {8, 2, 4, 9, 3, 6};
    std::cout << "a: ";
    for (auto &i :a)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "sortInsertion" << std::endl;
    sortInsertion(a);
    for (auto &i :a)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::vector<int> a2 = {8, 2, 4, 9, 3, 6};
    std::cout << "mergeSort" << std::endl;
    mergeSort(a,0,a2.size() -1);
    for (auto &i :a2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}

#endif //LEETCODE_SORTTEST_H
