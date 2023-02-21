#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H.at(i);
  }
  for (int i = N - 1; i > 0; i--) {
    auto check = [&]() { return H.at(i) < H.at(i - 1); };
    if (check()) {
      H.at(i - 1)--;
      if (check()) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
