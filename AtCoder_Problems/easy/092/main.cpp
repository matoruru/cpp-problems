#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count0 = 0, count1 = 0;
  for (int i = 0; i < S.size(); i++) {
    char c = S.at(i);
    if (c == '0')
      count0++;
    else
      count1++;
  }
  cout << min(count0, count1) * 2 << endl;
  return 0;
}
