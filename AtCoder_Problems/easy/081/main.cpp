#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int getHowMany2(int a) {
  int cnt = 0;
  while(a % 2 == 0) {
    a /= 2;
    cnt++;
  }
  return cnt;
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  int count2 = 0;
  for (int i = 0; i < N; i++) {
    count2 += getHowMany2(a.at(i));
  }

  cout << count2 << endl;

  return 0;
}
