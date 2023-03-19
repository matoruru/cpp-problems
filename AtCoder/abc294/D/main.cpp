#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  int min_called = 0;
  set<int> called;

  for (int i = 0; i < Q; i++) {
    int q;
    cin >> q;
    if (q == 1) {
      min_called++;
      called.insert(min_called);
    } else if (q == 2) {
      int arg;
      cin >> arg;
      called.erase(arg);
    } else if (q == 3) {
      cout << *called.begin() << endl;
    }
  }

  return 0;
}