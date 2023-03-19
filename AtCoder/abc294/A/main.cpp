#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> ans(0);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      ans.push_back(a);
    }
  }
  int len = ans.size();
  for (int i = 0; i < len; i++) {
    cout << ans.at(i) << (i != len - 1 ? " " : "");
  }
  cout << endl;

  return 0;
}