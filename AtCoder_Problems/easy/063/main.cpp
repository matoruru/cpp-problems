#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++)
    cin >> a.at(i);

  int breakNum = 0, idx = 1;
  for (int i = 1; i <= N; i++) {
    if (a.at(i) != idx) {
      breakNum++;
      continue;
    } else {
      idx++;
    }
  }

  if (breakNum == N)
    cout << -1 << endl;
  else
    cout << breakNum << endl;

  return 0;
}