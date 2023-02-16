#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<string> S(N);
  vector<int> P(N);
  vector<int> idx(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i) >> P.at(i);
    idx.at(i) = i;
  }

  sort(idx.begin(), idx.end(), [&](const int & a, const int & b) {
    if (S.at(a) != S.at(b))
      return S.at(a) < S.at(b);
    return P.at(a) > P.at(b);
  });

  for (auto i : idx) {
    cout << i + 1 << endl;
  }

  return 0;
}