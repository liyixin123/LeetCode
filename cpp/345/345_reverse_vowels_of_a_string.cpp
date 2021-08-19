#include <array>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  string reverseVowels(string s) {
    // Vowels: a e i o u or uppercase
    const int size = s.length();
    array<char, 10> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    auto exch = [](string &a, int pos1, int pos2) {
      char temp = a[pos1];
      a[pos1] = a[pos2];
      a[pos2] = temp;
    };
    auto find = [&](char flag) {
      for (int i = 0; i < 10; i++) {
        if (flag == vowels[i])
          return true;
      }
      return false;
    };
    int lo = 0, hi = size - 1;
    while (lo < hi) {
      while (lo < size && !find(s[lo])) {
        ++lo;
      }
      while (hi > 0 && !find(s[hi])) {
        --hi;
      }
      if (lo < hi) {
        exch(s, lo, hi);
        ++lo;
        --hi;
      }
    }
    return s;
  }
};
int main() {
  Solution s;
  std::cout << s.reverseVowels("leetcode") << std::endl;
  return 0;
}
