#include <bits/stdc++.h>
using namespace std;

string solve(vector<string> & s, int N) {
  set<string> w;
  for (int i = 0; i < N - 1; i++) {
    w.insert(s.at(i));
    if (w.count(s.at(i + 1)) || s.at(i).back() != s.at(i + 1).at(0)) {
      return "No";
    }
  }
  return "Yes";
}

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++)
    cin >> s.at(i);
  cout << solve(s, N) << endl;
  return 0;
}