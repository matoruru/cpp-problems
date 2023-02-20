#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  ll min_ = INT_MAX;
  for (int i = 0; i < 300000; i++) {
    ll C_cost = C * 2 * i;
    ll A_cost = A * max(0LL, (X - i));
    ll B_cost = B * max(0LL, (Y - i));
    min_ = min(min_, C_cost + A_cost + B_cost);
    if (X - i == 0 && Y - i == 0)
      break;
  }

  cout << min_ << endl;

  return 0;
}
