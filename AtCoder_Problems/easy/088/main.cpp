#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  map<string, int> m;
  cin >> N;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (!m.count(s)) {
      m.insert(pair(s, 0));
    }
    m.at(s)++;
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    string t;
    cin >> t;
    if (!m.count(t)) {
      m.insert(pair(t, 0));
    }
    m.at(t)--;
  }

  int max = 0;
  for (auto ma : m) {
    max = std::max(max, ma.second);
  }

  cout << max << endl;

  return 0;
}
