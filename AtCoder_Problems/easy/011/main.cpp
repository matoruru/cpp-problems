#include <bits/stdc++.h>
using namespace std;

int breakCount(int x) {
  int tmp = x, count = 0;
  while (tmp % 2 == 0) {
    tmp /= 2;
    count++;
  }
  return count;
}

int main() {
  int N;
  cin >> N;

  int max = -1;
  int ans;
  for (int i = 1; i <= N; i++) {
    int count = breakCount(i);
    if (max < count) {
      max = count;
      ans = i;
    }
  }
  cout << ans << endl;

  return 0;
}