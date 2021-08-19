#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int checkRecord(int n) {
    // dp[i][j][k] 分别代表 天数，A 数（0<= j <= 1) ,结尾的L数（0<=k <=2)
    // 长度，A 的数量，结尾连续L的数量
    vector<vector<vector<int>>> dp(n + 1,
                                   vector<vector<int>>(2, vector<int>(3)));
    dp[0][0][0] = 1;
    for (int i = 1; i <= n; i++) {
      // 以P 结尾的数量
      for (int j = 0; j <= 1; j++) {
        for (int k = 0; k <= 2; k++) {
          dp[i][j][0] = (dp[i - 1][j][k] + dp[i][j][0]) % MOD;
        }
      }
      // 以A结尾的数量
      for (int k = 0; k <= 2; k++) {
        dp[i][1][0] = (dp[i][1][0] + dp[i - 1][0][k]) % MOD;
      }
      // 以L结尾的数量
      for (int j = 0; j <= 1; j++) {
        for (int k = 1; k <= 2; k++) {
          dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][k - 1]) % MOD;
        }
      }
    }
    int sum = 0;
    for (int j = 0; j <= 1; j++) {
      for (int k = 0; k <= 2; k++) {
        sum = (sum + dp[n][j][k]) % MOD;
      }
    }
    return sum;
  }

  static constexpr int MOD = 1000000007;
};

int main() {
  Solution s;
  std::cout << s.checkRecord(10101) << std::endl;
  return 0;
}
