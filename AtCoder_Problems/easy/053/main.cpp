#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> roads(N + 1, 0);

  for (int i = 0; i < M; i++) {
    int ai, bi;
    cin >> ai >> bi;
    roads.at(ai)++;
    roads.at(bi)++;
  }

  for (int i = 1; i < N + 1; i++)
    cout << roads.at(i) << endl;

  return 0;
}