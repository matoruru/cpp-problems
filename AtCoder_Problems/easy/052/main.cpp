#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> B(N + 1);
  B.at(0) = B.at(N) = INT_MAX;
  for (int i = 1; i < N; i++) {
    cin >> B.at(i);
  }

  int total = 0;
  for (int i = 0; i < N; i++) {
    total += min(B.at(i), B.at(i + 1));
  }

  cout << total << endl;

  return 0;
}