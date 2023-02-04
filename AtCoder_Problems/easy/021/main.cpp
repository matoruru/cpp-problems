#include <bits/stdc++.h>
using namespace std;

int solve(int X) {
  for (int x_ = X;; x_++) {
    bool isPrime = true;
    for (int j = 2; j < sqrt(x_); j++) {
      if (x_ % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      return x_;
  }
}

int main() {
  int X;
  cin >> X;
  
  cout << solve(X) << endl;

  return 0;
}