#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TLE ...
int main() {
  ll N, K, Q;
  cin >> N >> K >> Q;
  vector<ll> person(N, K);

  for (int i = 0; i < Q; i++) {
    ll A;
    cin >> A;
    for (int j = 0; j < N; j++) {
      if (j != A - 1) person.at(j)--;
    }
  }

  for (int i = 0; i < N; i++) {
    if (person.at(i) > 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}