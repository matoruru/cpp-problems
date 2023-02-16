#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n, s, w, e;
  n = s = w = e = 0;
  int len = S.size();
  for (int i = 0; i < len; i++) {
    switch (S.at(i)) {
      case 'N':
        n = 1;
        break;
      case 'S':
        s = 1;
        break;
      case 'W':
        w = 1;
        break;
      case 'E':
        e = 1;
        break;
    }
  }

  cout << (n - s == 0 && w - e == 0 ? "Yes" : "No") << endl;

  return 0;
}