#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> isAC(N + 1, false);
  vector<int> wa(N + 1, 0);
  for (int i = 0; i < M; i++) {
    int pi;
    string Si;
    cin >> pi;
    cin >> Si;
    if (!isAC[pi]) {
      if (Si == "AC")
        isAC[pi] = true;
      else
        wa[pi]++;
    }
  }

  int cntAC = 0, cntWA = 0;
  for (int i = 1; i <= N; i++) {
    if (isAC.at(i)) {
      cntAC++;
      cntWA += wa.at(i);
    }
  }

  cout << cntAC << ' ' << cntWA << endl;

  return 0;
}
