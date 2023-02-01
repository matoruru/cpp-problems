#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int total_distance = 0;
  for (int xi, i = 0; i < N; i++) {
    cin >> xi;
    total_distance += min(xi, abs(xi - K));
  }

  cout << total_distance * 2 << endl;

  return 0;
}