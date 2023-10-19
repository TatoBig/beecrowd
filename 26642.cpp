#include <iostream>
#include <map>

using namespace std;

int steps = 0;
map<string, int> memo;

int gym(int t, int a, int b, int min, int max)
{
  if (memo.find(to_string(t) + to_string(b - a)) != memo.end())
  {
    return memo[to_string(t) + to_string(b - a)];
  }
  if (a + 2 == min)
  {
    return 0;
  }
  if (b - 2 == max)
  {
    return 0;
  }
  if (t == 0)
  {
    return 1;
  }
  int totalCount = 0;

  totalCount += gym(t - 1, a - 1, a + 1, min, max) + gym(t - 1, b - 1, b + 1, min, max);
  memo[to_string(t) + to_string(b - a)] = totalCount;

  return totalCount;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, m, n;

  cin >> t;
  cin >> m;
  cin >> n;

  int total = 0;

  for (int i = m; i <= n; i++)
  {
    total += gym(t - 1, i - 1, i + 1, m, n);
  }
  cout << total << "\n";

  return 0;
}