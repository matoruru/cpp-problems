#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  bool allEven = A % 2 == 0 || B % 2 == 0 || C % 2 == 0;

  cout << (allEven ? 0 : min(A * B, min(B * C, C * A))) << endl;

  return 0;
}
