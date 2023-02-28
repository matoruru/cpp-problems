#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(2, vector<int>(N));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }
  int max = INT_MIN;
  for (int i = 0; i < N; i++) {
    int total = 0, lr = 0;
    for (int j = 0; j < N; j++) {
      if (i == j) {
        total += A.at(lr).at(j);
        lr = 1;
      }
      total += A.at(lr).at(j);
    }
    max = std::max(max, total);
  }
  cout << max << endl;
  return 0;
}
