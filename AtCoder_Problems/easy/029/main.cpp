#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  const int len = S.size();
  int minimum = 999;
  for (int i = 0; i < len - 2; i++) {
    int joined = stoi((string){ S.at(i), S.at(i + 1), S.at(i + 2) });
    int diff = abs(753 - joined);
    minimum = min(minimum, diff);
  }

  cout << minimum << endl;

  return 0;
}