#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N + 1), B(N);
  for (ll i = 0; i < N + 1; i++)
    cin >> A.at(i);
  for (ll i = 0; i < N; i++)
    cin >> B.at(i);

  ll total = 0;
  for (ll i = 0; i < N; i++) {
    ll l = min(A.at(i), B.at(i));
    ll r = min(A.at(i + 1), B.at(i) - l);
    A.at(i + 1) -= r;
    total += l + r;
  }

  cout << total << endl;

  return 0;
}
