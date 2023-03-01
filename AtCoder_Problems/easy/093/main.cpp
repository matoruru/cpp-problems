#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N), sumMemo(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  sumMemo.at(0) = A.at(0);
  for (int i = 1; i < N; i++) {
    sumMemo.at(i) = sumMemo.at(i - 1) + A.at(i);
  }

  ll min = INT_MAX;
  for (int i = 0; i < N; i++) {
    min = std::min(min, abs(sumMemo.at(i) - (sumMemo.at(N - 1) - sumMemo.at(i))));
  }

  cout << min << endl;

  return 0;
}
