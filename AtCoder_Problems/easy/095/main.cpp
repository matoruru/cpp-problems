#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<int> arr = { A, B, C };
  sort(arr.begin(), arr.end());
  int count = 0;
  while (1) {
    if (arr.at(1) < arr.at(2)) {
      arr.at(0)++;
      arr.at(1)++;
    } else {
      break;
    }
    count++;
  }
  while (1) {
    if (arr.at(0) < arr.at(1)) {
      arr.at(0) += 2;
    } else if (arr.at(0) > arr.at(1)) {
      arr.at(1)++;
      arr.at(2)++;
    } else {
      break;
    }
    count++;
  }
  cout << count << endl;
  return 0;
}
