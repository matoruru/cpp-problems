#include <bits/stdc++.h>
using namespace std;

int toInt(char c) {
  return c - '0';
}

int main() {
  string S;
  cin >> S;
  int A = toInt(S.at(0)), B = toInt(S.at(1)), C = toInt(S.at(2)), D = toInt(S.at(3));
  vector<char> op = { '+', '+', '+', '-', '-', '-' };
  map<char, function<int(int, int)>> opf;
  opf.insert(pair('+', [](const int &a, const int &b) { return a + b; }));
  opf.insert(pair('-', [](const int &a, const int &b) { return a - b; }));

  do {
    char op1 = op.at(0), op2 = op.at(1), op3 = op.at(2);
    int total = 0;
    total = opf.at(op1)(A, B);
    total = opf.at(op2)(total, C);
    total = opf.at(op3)(total, D);
    if (total == 7) {
      cout << A << op1 << B << op2 << C << op3 << D << "=7" << endl;
      return 0;
    }
  } while (next_permutation(op.begin(), op.end()));

  return 0;
}
