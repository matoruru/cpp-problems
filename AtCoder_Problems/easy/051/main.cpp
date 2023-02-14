#include <bits/stdc++.h>
using namespace std;

int sumAll(string n) {
  int nLen = n.size(), sum = 0;;
  for (int i = 0; i < nLen; i++)
    sum += n.at(i) - '0';
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int total = 0;
  for (int i = 1; i <= N; i++) {
    int sum = sumAll(to_string(i));
    if (A <= sum && sum <= B) {
      total += i;
    }
  }

  cout << total << endl;

  return 0;
}