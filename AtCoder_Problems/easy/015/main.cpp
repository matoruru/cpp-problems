#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
  int N;
  cin >> N;
  int d[N];
  rep(i, N) cin >> d[i];
  sort(d, d + N);

  cout << d[N / 2] - d[N / 2 - 1] << endl;

  return 0;
}