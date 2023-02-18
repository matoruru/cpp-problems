#include <bits/stdc++.h>
using namespace std;

bool hasOnly9(string S) {
  int len = S.size();
  for (int i = 0; i < len; i++) {
    if (S.at(i) != '9')
      return false;
  }
  return true;
}

int main() {
  string N;
  cin >> N;
  int len = N.size();
  int N1 = N.at(0) - '0';
  int ans = 9 * (len - 1);
  if (hasOnly9((N.substr(1))))
    ans += N1;
  else
    ans += N1 - 1;
  cout << ans << endl;
  return 0;
}