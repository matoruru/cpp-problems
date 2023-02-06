#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll H; cin >> H;

  ll count = 1, ans = 0;
  while (H > 0) {
    ans += count;
    H /= 2;
    count = count * 2;
  }

  cout << ans << endl;

  return 0;
}