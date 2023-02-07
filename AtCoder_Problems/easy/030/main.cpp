#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int x = x2, y = y2;
  int dx = x2 - x1, dy = y2 - y1;
  for (int i = 0; i < 2; i++) {
    int tmp = dx;
    dx = -dy;
    dy = tmp;
    x += dx;
    y += dy;
    cout << x << " " << y;
    if (i == 0) cout << " ";
  }
  cout << endl;

  return 0;
}