#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
  return a.second > b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int in, c = 0, n, ni = 0, pac, toy, w;
  vector<pair<int, int>> toys;
  vector<pair<int, int>> profits;

  cin >> n;
  cout << n << "\n";

  while (ni < n)
  {
    cout << "c: " << c << "\n";
    if (c == 0)
    {
      cin >> pac;
    }
    else if (c == pac + 1)
    {
      sort(profits.begin(), profits.end(), cmp);

      int added_toys = 0, added_pkg = 0, curr_weight = 0;
      for (auto tt : profits)
      {
        if (toys[tt.first].second + curr_weight <= 50)
        {
          added_toys += toys[tt.first].first;
          curr_weight += toys[tt.first].second;
          added_pkg++;
        }
      }
      cout << c << "\n";
      cout << "brinquedos"
           << "\n";
      cout << added_toys << "   " << pac - added_pkg << "   " << curr_weight << "\n";

      ni++;
      c = 0;
      toys.clear();
      profits.clear();
    }
    else
    {
      cin >> toy;
      cin >> w;
      cout << toy << "   - W: " << w << "\n";
      profits.push_back(pair<int, int>(c - 1, toy - w));
      toys.push_back(pair<int, int>(toy, w));
    }
    c++;
  }

  return 0;
}