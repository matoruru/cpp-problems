#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N), B(M), C(N + M);
  for (int i = 0; i < N; i++) {
    ll tmp;
    cin >> tmp;
    A.at(i) = tmp;
    C.at(i) = tmp;
  }
  for (int i = 0; i < M; i++) {
    ll tmp;
    cin >> tmp;
    B.at(i) = tmp;
    C.at(N + i) = tmp;
  }
  sort(C.begin(), C.end());
  for (int i = 0, idx = 0; i < N + M; i++) {
    if (A.at(idx) != C.at(i)) {
      continue;
    }
    cout << i + 1;
    idx++;
    if (idx < A.size()) {
      cout << " ";
    } else {
      cout << endl;
      break;
    }
  }

  for (int i = 0, idx = 0; i < N + M; i++) {
    if (B.at(idx) != C.at(i)) {
      continue;
    }
    cout << i + 1;
    idx++;
    if (idx < B.size()) {
      cout << " ";
    } else {
      cout << endl;
      break;
    }
  }

  return 0;
}