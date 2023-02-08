#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.size();
  vector<bool> table(26, false);

  for (int i = 0; i < len; i++)
    table.at(S.at(i) - 'a') = true;

  for (int i = 0; i < 26; i++) {
    if (!table.at(i)) {
      cout << (char)(i + 'a') << endl;
      return 0;
    }
  }

  cout << "None" << endl;

  return 0;
}