#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

using ll = long long;

bool oddExists(vector<ll> & A, int N) {
  for (int i = 0; i < N; i++) {
    if (A.at(i) % 2 != 0)
      return true;
  }
  return false;
}

void halfAll(vector<ll> & A, int N) {
  for (int i = 0; i < N; i++) {
    A.at(i) = A.at(i) / 2;
  }
}

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A.at(i);

  int count = 0;
  while(!oddExists(A, N)) {
    halfAll(A, N);
    count++;
  }

  cout << count << endl;

  return 0;
}