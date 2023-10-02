#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int in, c = 0, n, ni = 0, pac, toy, w;
  vector<map <int, int>> toys;


  cin >> n;

  while (ni < n)
  {
    if (c == 0) {
      cin >> pac;
    }
    else if (c == pac + 1) {
      cout << "brinquedos" << "\n";
    } else {
      cin >> toy;
      cin >> w;
      map<int, int> curr_toy;
      curr_toy.insert(pair<int, int>(c - 1, toy - w));
      toys.push_back(curr_toy);

    }
    c++;
  }


  return 0;
}