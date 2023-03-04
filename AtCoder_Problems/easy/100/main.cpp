#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> a.at(i);
  }

  int count = 0;
  for (int i = 1; i <= N; i++) {
    int ai = a.at(a.at(i));
    if (ai == i)
      count++;
  }

  cout << count / 2 << endl;

  return 0;
}
