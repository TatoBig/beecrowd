#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> ally;
  vector<int> enemy;

  int c = 0, in, s;
  cin >> s;

  while (cin >> in)
  {
    if (c < s)
    {
      enemy.push_back(in);
    }
    else
    {
      ally.push_back(in);
    }
    c++;
  }

  sort(enemy.begin(), enemy.end());
  sort(ally.begin(), ally.end());

  int points = 0;
  for (int i = 0, j = 0; i < s; i++)
  {
    if (ally[i] > enemy[j])
    {
      points++;
      j++;
    }
  }
  cout << points << "\n";

  return 0;
}