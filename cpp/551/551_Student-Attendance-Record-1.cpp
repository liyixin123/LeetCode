#include <ios>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  bool checkRecord(string s) {
    int absent = 0;
    int late = 0;
    for (auto &c : s) {
      if (c == 'L')
        late++;
      else if (c == 'A') {
        late = 0;
        absent++;
      } else
        late = 0;
      if (absent > 1 || late > 2)
        return false;
    }
    return true;
  }
};
int main()

{
  Solution s;
  cout << boolalpha;
  cout << s.checkRecord("PPALLP") << endl;
  cout << s.checkRecord("PPALLL") << endl;
  cout << s.checkRecord("PPLALL") << endl;
  return 0;
}
