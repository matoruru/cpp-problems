#include <bits/stdc++.h>
using namespace std;

int pow2(int n) {
  return n * n;
}

bool isSquare(int n) {
  for (int i = 0; i <= 4000; i++) {
    if (pow2(i) == n) {
      return true;
    } else if (pow2(i) > n) {
      return false;
    }
  }
}

int main() {
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> X.at(i).at(j);
    }
  }

  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j)
        continue;
      int total = 0;
      for (int k = 0; k < D; k++)
        total += pow2(X.at(i).at(k) - X.at(j).at(k));
      if (isSquare(total))
        count++;
    }
  }

  cout << count / 2 << endl;

  return 0;
}