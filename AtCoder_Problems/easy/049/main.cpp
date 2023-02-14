#include <bits/stdc++.h>
using namespace std;

const char s = '#';

int main() {
  int H, W;
  cin >> H >> W;

  for (int i = 0; i < W + 2; i++)
    cout << s;
  cout << endl;

  for (int i = 0; i < H; i++) {
    cout << s;
    for (int j = 0; j < W; j++) {
      char c;
      cin >> c;
      cout << c;
    }
    cout << s << endl;
  }

  for (int i = 0; i < W + 2; i++)
    cout << s;
  cout << endl;

  return 0;
}