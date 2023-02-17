#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll X;
  cin >> X;

  for (int i = 1; X >= i * 100; i++) {
    if (i * 100 <= X && X <= i * 100 + i * 5) {
      cout << 1 << endl;
      return 0;
    }
  }

  cout << 0 << endl;

  return 0;
}