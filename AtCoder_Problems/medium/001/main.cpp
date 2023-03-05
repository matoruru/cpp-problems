#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> a.at(i);
  }

  vector<bool> pressed(N + 1, false);
  int press = a.at(1), count = 1;;
  while (press != 2) {
    if (pressed.at(press) == true) {
      cout << -1 << endl;
      return 0;
    }
    pressed.at(press) = true;
    count++;
    press = a.at(press);
  }

  cout << count << endl;
  
  return 0;
}
