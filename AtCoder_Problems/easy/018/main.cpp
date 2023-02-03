#include <bits/stdc++.h>
using namespace std;

bool isACGT(char c) {
  return string("ACGT").find(c) != string::npos;
}

int main() {
  string S;
  cin >> S;

  int max = 0, count = 0;
  for (int i = 0; i < S.size(); i++) {
    if (isACGT(S.at(i))) {
      count++;
      if (max < count) {
        max = count;
      }
    } else {
      count = 0;
    }
  }

  cout << max << endl;

  return 0;
}