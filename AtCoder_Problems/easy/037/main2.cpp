#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, K, Q;
  cin >> N >> K >> Q;
  vector<ll> person(N, K - Q);

  for (int i = 0; i < Q; i++) {
    ll A;
    cin >> A;
    person.at(A - 1)++;
  }

  for (int i = 0; i < N; i++) {
    if (person.at(i) > 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}