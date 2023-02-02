#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> pow2s = { 1, 2, 4, 8, 16, 32, 64 };

  int ans;
  int length = 7;
  for (int i = 0; i < length; i++) {
    if (N > 64) {
      ans = 64;
      break;
    } 
    if (N == pow2s.at(i)) {
      ans = pow2s.at(i);
      break;
    }
    if (N < pow2s.at(i)) {
      ans = pow2s.at(i - 1);
      break;
    }
  }
  cout << ans << endl;

  return 0;
}