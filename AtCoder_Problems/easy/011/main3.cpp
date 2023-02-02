#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int x = 1;
  while (1) {
    if (x * 2 > N) {
      cout << x << endl;
      break;
    }
    x *= 2;
  }

  return 0;
}