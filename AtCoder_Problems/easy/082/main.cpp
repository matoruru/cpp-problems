#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll Q, H, S, D, N;
  cin >> Q >> H >> S >> D >> N;

  ll L1 = min(Q * 4, min(H  * 2, S));
  ll L2 = min (L1 * 2, D);

  ll cost = 0;
  if (L2 < L1 * 2) {
    cost = (N / 2) * L2 + (N % 2) * L1;
  } else {
    cost = N * L1;
  }

  cout << cost << endl;

  return 0;
}
