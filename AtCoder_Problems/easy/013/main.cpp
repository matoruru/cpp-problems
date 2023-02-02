#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int solve(int A, int B, int C, int count) {
  if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0) {
    return count;
  }
  if (A == B && B == C) {
    return -1;
  }
  return solve((B + C) / 2, (A + C) / 2, (A + B) / 2, count + 1);
}

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  cout << solve(A, B, C, 0) << endl;

  return 0;
}