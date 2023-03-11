#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<bool> alreadyCalled(N + 1, false);
  for (int i = 1; i < N + 1; i++) {
    int a;
    cin >> a;
    if (!alreadyCalled.at(i)) {
      alreadyCalled.at(a) = true;
    }
  }

  int count = 0;
  for (int i = 1; i < N + 1; i++) {
    if (!alreadyCalled.at(i)) {
      count++;
    }
  }
  
  cout << count << endl;
  for (int i = 1; i < N + 1; i++) {
    if (!alreadyCalled.at(i)) {
      count--;
      cout << i << (count != 0 ? " " : "");
    }
  }
  cout << endl;

  return 0;
}