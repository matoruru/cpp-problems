#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;

int f(int n) {
  static vector<int> f_(MAX, -1);
  if (f_.at(n) == -1) {
    if (n % 2)
      f_.at(n) = 3 * n + 1;
    else
      f_.at(n) = n / 2;
  }
  return f_.at(n);
}

int a(int s, int i) {
  static vector<int> a_(MAX, -1);
  if (a_.at(i) == -1) {
    if (i == 1)
      a_.at(i) = s;
    else
      a_.at(i) = f(a(s, i - 1));
  }
  return a_.at(i);
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