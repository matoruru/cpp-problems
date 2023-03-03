#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N);
  vector<int> cheapOrd(N);
  for (int i = 0; i < N; i++) {
    cheapOrd.at(i) = i;
    cin >> A.at(i) >> B.at(i);
  }

  sort(cheapOrd.begin(), cheapOrd.end(), [&](const int &a, const int &b) {
    return A.at(a) < A.at(b);
  });

  ll cost = 0;
  for (int i = 0; i < N; i++) {
    int idx = cheapOrd.at(i);
    ll num = min(B.at(idx), M);
    cost += A.at(idx) * num;
    M -= num;
    if (M == 0) {
      break;
    }
  }

  cout << cost << endl;

  return 0;
}
