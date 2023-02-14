#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  unordered_map<string, bool> map;

  string s;
  cin >> s;
  map.insert(pair(s, true));
  for (int i = 0; i < N - 1; i++) {
    char lastLetter = s.at(s.size() - 1);
    cin >> s;
    if (map.count(s) != 0 || s.at(0) != lastLetter) {
      cout << "No" << endl;
      return 0;
    }
    map.insert(pair(s, true));
  }

  cout << "Yes" << endl;

  return 0;
}