#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N;
  cin >> N;
  ll ans = 1;
  for (int i = 1; i <= N; i++) {
    ans = i * ans % (1000000000 + 7);
  }
  cout << ans << endl;
  return 0;
}
