#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int>> A(N, vector<int>(M));
  rep(i, M) cin >> B.at(i);
  for (int i = 0; i < N; i++) {
    rep(j, M) cin >> A.at(i).at(j);
  }

  int correct = 0;
  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = 0; j < M; j++) {
      sum += A.at(i).at(j) * B.at(j);
    }
    if (sum + C > 0) correct++;
  }

  cout << correct << endl;

  return 0;
}