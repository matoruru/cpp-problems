#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll X, Y;
  cin >> X >> Y;
  int count = 1;
  while (X * 2 <= Y) {
    X *= 2;
    count++;
  }
  cout << count << endl;
  return 0;
}
