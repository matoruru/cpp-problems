#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N;
  cin >> N;
  int n3 = N * 3;
  vector<ll> a(n3);
  for (int i = 0; i < n3; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  ll total = 0;
  for (int i = N; i < n3; i += 2) {
    total += a.at(i);
  }
  cout << total << endl;
  return 0;
}
