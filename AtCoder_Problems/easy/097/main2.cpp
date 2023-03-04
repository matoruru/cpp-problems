#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> AB(N);
  for (int i = 0; i < N; i++) {
    cin >> AB.at(i).first >> AB.at(i).second;
  }

  sort(AB.begin(), AB.end());

  ll cost = 0;
  for (int i = 0; i < N; i++) {
    ll num = min(AB.at(i).second, M);
    cost += AB.at(i).first * num;
    M -= num;
    if (M == 0) {
      break;
    }
  }

  cout << cost << endl;

  return 0;
}
