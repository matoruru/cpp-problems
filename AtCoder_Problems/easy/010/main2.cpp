#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void bubbleSort(vector<int> &v, int length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (v.at(j) < v.at(j + 1)) swap(v.at(j), v.at(j + 1));
    }
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  bubbleSort(a, N);

  int Alice = 0, Bob = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      Alice += a.at(i);
    } else {
      Bob += a.at(i);
    }
  }
  
  cout << Alice - Bob << endl;

  return 0;
}