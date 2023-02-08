#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 0, N;
  string S;
  cin >> N >> S;

  int max_ = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'I')
      x++;
    else
      x--;
      max_ = max(x, max_);
  }

  cout << max_ << endl;

  return 0;
}