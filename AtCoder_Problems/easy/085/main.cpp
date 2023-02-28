#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, N;
  cin >> D >> N;

  string tail00 = "";
  for (int i = 0; i < D; i++) {
    tail00 += "00";
  }

  cout << (N == 100 ? 101 : N) << tail00 << endl;

  return 0;
}
