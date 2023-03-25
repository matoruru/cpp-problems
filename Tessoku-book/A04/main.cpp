#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
  string s = "";
  int k = 512;
  while (k >= 1) {
    if (n >= k) {
      n -= k;
      s += "1";
    } else {
      s += "0";
    }
    k /= 2;
  }
  return s;
}

int main() {
  int N;
  cin >> N;
  cout << solve(N) << endl;
  return 0;
}
