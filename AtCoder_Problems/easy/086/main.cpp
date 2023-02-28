#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  string S;
  ll K;
  cin >> S >> K;
  for (int i = 0; i < K; i++) {
    if (S.at(i) != '1') {
      cout << S.at(i) << endl;
      return 0;
    }
  }
  cout << 1 << endl;
  return 0;
}