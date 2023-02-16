#include <bits/stdc++.h>
using namespace std;

int maxValue(map<string, int> m) {
  int max_ = INT_MIN;
  int len = m.size();
  for (pair<string, int> mi : m) {
    max_ = max(max_, mi.second);
  }
  return max_;
}

int main() {
  int N;
  cin >> N;
  map<string, int> m;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (m.count(s) == 0)
      m.insert(pair(s, 1));
    else
      m.at(s)++;
  }

  int maxVal = maxValue(m);
  for (pair<string, int> mi : m) {
    if (mi.second == maxVal) {
      cout << mi.first << endl;
    }
  }

  return 0;
}