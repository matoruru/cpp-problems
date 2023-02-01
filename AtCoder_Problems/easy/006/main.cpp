#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll H, W;
  cin >> H >> W;

  if (H == 1 || W == 1) {
    cout << 1 << endl;
    return 0;
  }

  ll ans;

  if (H * W % 2 == 0) {
    ans = H * W / 2;
  } else {
    ans = H * W / 2 + 1;
  }

  cout << ans << endl;

  return 0;
}