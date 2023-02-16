#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++)
    cin >> a.at(i);

  int breakNum = 1;
  for (int i = 1; i <= N; i++) {
    if (a.at(i) == breakNum)
      breakNum++;
  }

  cout << (breakNum == 1 ? - 1 : N - breakNum + 1) << endl;

  return 0;
}