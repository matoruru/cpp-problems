#include <bits/stdc++.h>
using namespace std;

using ll = long long;

template<class T> inline bool chmin(T &a, T b) {
  if (a > b) { a = b; return true; }
  return false;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> h(N);
  for (int i = 0; i < N; i++)
    cin >> h.at(i);
  sort(h.begin(), h.end());
  ll min = INT_MAX;
  for (int i = 0; i <= N - K; i++) {
    int L = i, R = K + i - 1;
    chmin(min, h.at(R) - h.at(L));
  }

  cout << min << endl;

  return 0;
}
