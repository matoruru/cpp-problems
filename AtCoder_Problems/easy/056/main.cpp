#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll A, B, K;
  cin >> A >> B >> K;
  set<int> n;

  int small = 1, large = 1;
  for (ll i = A; i <= B; i++) {
    if (small <= K) {
      n.insert(i);
      small++;
    }
  }
  for (ll i = B; i >= A; i--) {
    if (large <= K) {
      n.insert(i);
      large++;
    }
  }

  for (int x : n) {
    cout << x << endl;
  }

  return 0;
}