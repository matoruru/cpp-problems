#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N;
  cin >> N;
  ll min = LONG_LONG_MAX;
  for (int i = 1; i <= 1000000; i++) {
    if (N % i == 0) {
      ll j = N / i;
      min = std::min(min, i + j - 2);
    }
  }

  cout << min << endl;

  return 0;
}
