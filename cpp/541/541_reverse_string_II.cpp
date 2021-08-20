#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  string reverseStr(string s, int k) {
    int n = s.length();
    for (int i = 0; i < n; i += 2 * k) {
      reverse(s, i, min(i + k - 1, n - 1));
    }
    return s;
  }

private:
  void reverse(string &s, int a, int b) {
    while (a < b) {
      swap(s[a++], s[b--]);
    }
  }
};
int main() {
  Solution s;
  // dcba
  std::cout << s.reverseStr("abcd", 4) << std::endl;
  // bacdfeg
  std::cout << s.reverseStr("abcdefg", 2) << std::endl;

  // bacd
  std::cout << s.reverseStr("abcd", 2) << std::endl;
  return 0;
}
