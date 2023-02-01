#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int l = (int)(N / 1.08) - 1;
  int r = (int)(N / 1.08) + 1;

  for (int i = l; i <= r; i++) {
    if ((int)(i * 1.08) == N) {
      cout << i << endl;
      return 0;
    }
  }

  cout << ":(" << endl;

  return 0;
}