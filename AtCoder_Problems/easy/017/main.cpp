#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
  int N;
  cin >> N;
  int v[N];
  rep(i, N) {
    int x;
    cin >> x;
    v[i] = x;
  }
  sort(v, v + N);

  double new_v = v[0];
  for (int i = 0; i < N - 1; i++) {
    new_v = (new_v + v[i + 1]) / 2.0;
  }

  cout << new_v << endl;

  return 0;
}