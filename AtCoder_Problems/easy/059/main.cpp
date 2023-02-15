#include <bits/stdc++.h>
using namespace std;

bool rule1(string S) {
  if (S.at(0) == 'A')
    return true;
  return false;
}

bool rule2(string S) {
  int sLen = S.size();
  int count = 0;
  for (int i = 2; i < sLen - 1; i++) {
    if (S.at(i) == 'C')
      count++;
  }
  return count == 1 ? true : false;
}

bool isLower(char c) {
  return c >= 'a' && c <= 'z';
}

bool rule3(string S) {
  if (!isLower(S.at(1)))
    return false;
  int sLen = S.size();
  for (int i = 2; i < sLen - 1; i++) {
    if (!isLower(S.at(i)) && S.at(i) != 'C')
      return false;
  }
  if (!isLower(S.at(sLen - 1)))
    return false;
  return true;
}

bool parse(string S) {
  if (rule1(S) && rule2(S) && rule3(S))
    return true;
  return false;
}

int main() {
  string S;
  cin >> S;
  cout << (parse(S) ? "AC" : "WA") << endl;
  return 0;
}