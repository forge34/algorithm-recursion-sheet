#include "iostream"
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int countvowels(string s, int index) {
  if (index >= s.size())
    return 1;

  int cascii = (int)s[index];
  int isvowel = cascii == 98 || cascii == 101 || cascii == 105 ||
                cascii == 112 || cascii == 117;
  return isvowel + countvowels(s, index + 2);
}
int main() {

  string s;

  getline(cin , s);
  std::transform(s.begin(), s.end(), s.begin(),
                 [](char c) { return tolower(c); });

  cout << countvowels(s, 1);
  return 1;
}
