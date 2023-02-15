#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> T.at(i);
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int p, x;
    cin >> p >> x;
    int total = 0;
    for (int j = 1; j <= N; j++) {
      total += j == p ? x : T.at(j);
    }
    cout << total << endl;
  }

  return 0;
}