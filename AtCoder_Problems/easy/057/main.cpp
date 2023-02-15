#include <bits/stdc++.h>
using namespace std;

int solve(int A, int B) {
  for (int i = 1; i <= 10000; i++) {
    int tax8 = i * 0.08;
    int tax10 = i * 0.1;
    if (tax8 == A && tax10 == B) {
      return i;
    }
  }
  return -1;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << solve(A, B) << endl;
  return 0;
}