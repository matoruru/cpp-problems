#include <bits/stdc++.h>
using namespace std;

int ans(int A, int B) {
  for (int i = 0; i <= 20; ++i) {
    if (1 + (A - 1) * i >= B) {
      return i;
    }
  }
}

int main() {
  int A, B;
  cin >> A >> B;

  cout << ans(A, B) << endl;

  return 0;
}