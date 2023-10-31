#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<char> ch;

int main() {
  ch = set<char>();

  int x;
  cin >> x;

  vector<string> arr;

  for (int i = 0; i < x; i++) {
    string y;
    cin >> y;

    arr.push_back(y);

    for (char letter : y) {
      ch.insert(letter);
    }
  }

  vector<char> ch_vec(ch.begin(), ch.end());

  sort(ch_vec.begin(), ch_vec.end());

  for (char c : ch_vec) {
    cout << c;
  }

  cout.flush();

  return 0;
}

/*
 * Author:
 * Date:
 * Name:
 */
