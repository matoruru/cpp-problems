#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  if (A % 2 == 0 || B % 2 == 0 || C % 2 == 0) {
    cout << 0 << endl;
    return 0;
  }

  ll min1, min2;
  if (A < B) {
    min1 = A;
    min2 = B < C ? B : C;
  } else {
    min1 = B;
    min2 = A < C ? A : C;
  }

  cout << min1 * min2 << endl;

  return 0;
}
