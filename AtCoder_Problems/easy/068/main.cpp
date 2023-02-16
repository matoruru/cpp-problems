#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  map<string, vector<pair<int, int>>> book; 
  for (int i = 0; i < N; i++) {
    string S;
    int P;
    cin >> S >> P;
    book[S].push_back(pair(P, i + 1));
  }

  for (auto & bo : book) {
    sort(bo.second.begin(), bo.second.end());
    reverse(bo.second.begin(), bo.second.end());
  }
  for (auto bo : book) {
    int len = bo.second.size();
    for (int i = 0; i < len; i++) {
      cout << bo.second.at(i).second << endl;
    }
  }

  return 0;
}