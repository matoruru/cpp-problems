#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int go(int i, int j, int H, int W, const vector<vector<ll>> & A, set<int> table) {
  static int count = 0;
  if (table.count(A.at(i).at(j)) != 0) {
    return 0;
  }
  table.insert(A.at(i).at(j));
  if  (i + 1 == H && j + 1 == W) {
    count++;
  }
  if (i + 1 < H) {
    go(i + 1, j, H, W, A, table);
  }
  if (j + 1 < W) {
    go(i, j + 1, H, W, A, table);
  }

  return count;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<ll>> A(H, vector<ll>(W));
  set<int> table;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      int a;
      cin >> a;
      A.at(i).at(j) = a;
    }
  }

  cout << go(0, 0, H, W, A, table) << endl;;

  return 0;
}