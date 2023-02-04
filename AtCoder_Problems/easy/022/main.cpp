#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int solve(vector<int> &a, int N, int x) {
  int happyCount = 0;
  for (int i = 0; i < N; i++) {
    if (x >= a.at(i)) {
      x -= a.at(i);
      a.at(i) = 0;
      happyCount++;
    } else {
      return happyCount;
    }
    if (x == 0) {
      return happyCount;
    }
  }
  return happyCount - 1;
}

int main() {
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  rep(i, N) cin >> a.at(i);

  sort(a.begin(), a.end());

  cout << solve(a, N, x) << endl;

  return 0;
}