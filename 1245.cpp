#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int c = 0, in, n, pairs = 0;
  char foot;
  multiset<pair<char, int>> boots;

  while (cin >> in)
  {
    if (c == 0)
    {
      n = in;
    }
    else if (c == n + 1)
    {
      cout << pairs << "\n";
      boots.clear();
      c = 0;
      n = in;
      pairs = 0;
    }
    else
    {
      cin >> foot;
      if (foot == 'D')
      {
        auto boot = boots.find(pair<char, int>('E', in));
        if (boot != boots.end())
        {
          pairs++;
          boots.erase(boots.find(*boot));
        }
        else
        {
          boots.insert(pair<char, int>(foot, in));
        }
      }
      else
      {
        auto boot = boots.find(pair<char, int>('D', in));
        if (boot != boots.end())
        {
          pairs++;
          boots.erase(boots.find(*boot));
        }
        else
        {
          boots.insert(pair<char, int>(foot, in));
        }
      }
    }
    c++;
  }

  cout << pairs << "\n";

  return 0;
}