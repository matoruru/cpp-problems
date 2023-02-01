#include <bits/stdc++.h>
using namespace std;

int digit(int x) {
  int count = 0;
  int tmp = x;
  while (tmp >= 1) {
    count++;
    tmp /= 10;
  }
  return count;
}

int main() {
  int a, b;
  cin >> a >> b;

  int digit_b = digit(b);
  for (int i = 0; i < digit_b; i++) {
    a *= 10;
  }
  int joined = a + b;

  bool isSquare = false;
  for (int i = 1; i < 1000; i++) {
    if (i * i == joined) {
      isSquare = true;
      break;
    }
  }

  if (isSquare) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}