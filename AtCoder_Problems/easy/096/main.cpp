#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b) {
  int x = 1;
  while (b--) x *= a;
  return x;
}

int main() {
  int N;
  cin >> N;
  int odd = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) odd++;
  }
  cout << pow(3, N) - pow(2, odd) << endl;
  return 0;
}
