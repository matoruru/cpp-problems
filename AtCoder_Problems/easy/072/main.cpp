#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  int max_ = 1;
  for (int i = 2; i < X; i++) {
    int acc = i * i;
    while (acc <= X) {
      max_ = max(max_, acc);
      acc *= i;
    }
  }

  cout << max_ << endl;

  return 0;
}
