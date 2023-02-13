#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> H(N);
  for (int i = 0; i < N; i++)
    cin >> H.at(i);

  int countMax = 0, count;
  for (int i = 0; i < N; i++) {
    count = 0;
    for (int j = i + 1; j < N; j++) {
      if (H.at(j - 1) < H.at(j))
        break;
      count++;
    }
    countMax = max(countMax, count);
    i += count;
  }

  cout << countMax << endl;

  return 0;
}