#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> A(3, vector<int>(3));
  vector<pair<int, int>> A_table(101, pair(-1, -1));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int Aij;
      cin >> Aij;
      A.at(i).at(j) = Aij;
      A_table.at(Aij) = pair(i, j);
    }
  }

  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int b;
    cin >> b;
    pair<int, int> idx = A_table.at(b);
    if (idx.first != -1) {
      A.at(idx.first).at(idx.second) = 0;
    }
  }

  bool isBingo = false;
  int horizontal, vertical, diagonal1 = 0, diagonal2 = 0;
  for (int i = 0; i < 3; i++) {
    horizontal = 0, vertical = 0;
    for (int j = 0; j < 3; j++) {
      horizontal += A.at(i).at(j);
      vertical += A.at(j).at(i);
      if (i == j) {
        diagonal1 += A.at(i).at(j);
      }
      if (i + j == 2) {
        diagonal2 += A.at(i).at(j);
      }
    }
    if (horizontal == 0 || vertical == 0) {
      isBingo = true;
      break;
    }
  }

  if (diagonal1 == 0 || diagonal2 == 0) {
    isBingo = true;
  }

  if (isBingo) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}