#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int len = S.size();
  for (int i = 0; i < len; i++) {
    string rotatedS = S.substr(len - i) + S.substr(0, len - i);
    if (rotatedS == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}