#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int lMax = INT_MIN, rMin = INT_MAX;
  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    lMax = max(lMax, L);
    rMin = min(rMin, R);
  }

  cout << max(0, rMin - lMax + 1) << endl;

  return 0;
}