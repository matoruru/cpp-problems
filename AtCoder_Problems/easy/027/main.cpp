#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  cout << A * (ll)(N / (A + B)) + min(N % (A + B), A) << endl;

  return 0;
}