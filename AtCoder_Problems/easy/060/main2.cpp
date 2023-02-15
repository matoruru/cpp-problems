#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, total = 0;
  cin >> N;
  vector<int> T(N + 1);
  for (int i = 1; i <= N; i++) {
    int Ti;
    cin >> Ti;
    total += T.at(i) = Ti;
  }

  int M;
  cin >> M;
  for (int i = 1; i <= M; i++) {
    int p, x;
    cin >> p >> x;
    cout << total - T.at(p) + x << endl;
  }

  return 0;
}