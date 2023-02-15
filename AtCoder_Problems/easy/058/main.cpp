#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  vector<int> H(N);
  for (int i = 0; i < N; i++) cin >> H.at(i);
  double min_ = DBL_MAX, minIdx = 0;

  for (int i = 0; i < N; i++) {
    double aveDeg = T - H.at(i) * 0.006;
    double diff = abs(A - aveDeg);
    if (diff < min_) {
      min_ = diff;
      minIdx = i;
    }
  }

  cout << minIdx + 1<< endl;

  return 0;
}