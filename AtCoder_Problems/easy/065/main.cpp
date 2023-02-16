#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int len = s.size(), count = 0;
  int AIdx = 0, ZIdx = 0;
  for (int i = 0; i < len; i++) {
    if (s.at(i) == 'A') {
      AIdx = i;
      break;
    }
  }
  for (int i = len - 1; i > AIdx; i--) {
    if (s.at(i) == 'Z') {
      ZIdx = i;
      break;
    }
  }

  cout << ZIdx - AIdx + 1 << endl;

  return 0;
}