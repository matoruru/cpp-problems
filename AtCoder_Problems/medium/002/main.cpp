#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  string S;
  cin >> S;
  ll len = S.size();
  ll wDistance = 0;

  ll ans = 0;
  for (int i = 0; i < len; i++) {
    if (S.at(i) == 'W')
      ans += wDistance;
    else
      wDistance++;
  }

  cout << ans << endl;

  return 0;
}
