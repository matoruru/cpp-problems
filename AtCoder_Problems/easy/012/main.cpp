#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int longestGap = 0, gap;
  for (int i = 1; i < N; i++) {
    gap = abs(A.at(i - 1) - A.at(i));
    if (longestGap < gap) {
      longestGap = gap;
    }
  }

  gap = abs(K + A.at(0) - A.at(N - 1));
  if (longestGap < gap) {
    longestGap = gap;
  }

  cout << K - longestGap << endl;

  return 0;
}