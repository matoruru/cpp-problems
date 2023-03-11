#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.size();

  for (int i = 0; i < len / 2; i++) {
    char tmp = S.at(i * 2);
    S.at(i * 2) = S.at((i * 2) + 1);
    S.at((i * 2) + 1) = tmp;
  }

  cout << S << endl;

  return 0;
}