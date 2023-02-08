#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
  string S;
  set<char> table;
  cin >> S;
  int len = S.size();
  rep(i, len) table.insert(S.at(i));

  if (table.size() == len) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}