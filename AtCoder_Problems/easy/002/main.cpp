#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
const int inf = 1000000000; // 10^9

// x ^ y
int pow(int x, int y) {
  int ans = 1;
  for (int i = 0; i < y; ++i) {
    ans *= x;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, N) cin >> X.at(i);

  int min = inf;
  for (int i = 1; i <= 100; ++i) {
    int cost = 0;
    rep(j, N) cost += pow(X.at(j) - i, 2);
    if (min > cost) min = cost;
  }

  cout << min << endl;
  return 0;
}