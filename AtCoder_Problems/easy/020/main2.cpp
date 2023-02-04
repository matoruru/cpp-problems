#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;

int f(int n) {
  if (n % 2)
    return 3 * n + 1;
  return n / 2;
}

int a(int s, int i) {
  if (i == 1)
    return s;
  return f(a(s, i - 1));
}

int solve(int s) {
  for (int m = 2; m < MAX; m++) {
    for (int n = 1; n < m; n++) {
      if (a(s, m) == a(s, n)) {
        return m;
      }
    }
  }
}

int main() {
  int s;
  cin >> s;

  cout << solve(s) << endl;

  return 0;
}