#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i);
  }

  int lA = 0;
  while (lA < M && A.at(lA) < X) {
    lA++;
  }

  cout << min(lA, M - lA) << endl;

  return 0;
}