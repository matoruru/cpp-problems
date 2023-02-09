#include <bits/stdc++.h>
using namespace std;

int calcLastOrderIdx(vector<int> order) {
  int min = 10;
  int lastOrderIdx = 0;
  for (int i = 0; i < 5; i++) {
    int mod10 = order.at(i) % 10;
    if (mod10 > 0 && min > mod10) {
      min = mod10;
      lastOrderIdx = i;
    }
  }
  return lastOrderIdx;
}

int nextOrderTime(int t) {
  while(t % 10 != 0) t++;
  return t;
}

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  vector<int> order(5);
  for (int i = 0; i < 5; i++) {
    cin >> order.at(i);
  }
  swap(order.at(calcLastOrderIdx(order)), order.at(4));

  int time = 0;
  for (int i = 0; i < 4; i++) {
    time += nextOrderTime(order.at(i));
  }

  cout << time + order.at(4) << endl;

  return 0;
}