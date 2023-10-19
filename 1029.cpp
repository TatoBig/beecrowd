#include <iostream>
#include <map>

using namespace std;

map<int, pair<int, int>> memo;

pair<int, int> fib(int n)
{

  auto found = memo.find(n);
  if (found != memo.end())
  {
    auto found_m = *found;
    pair<int, int> found_pair = found_m.second;
    cout << "MEMO: " << found_pair.second << " - " << "fib: " << found_pair.first << "\n";
    return found_pair;
  }
  if (n < 2)
  {
    return pair<int, int>(1, 2);
  }
  memo[n].first = fib(n - 1).first + fib(n - 2).first;
  memo[n].second = steps;
  return memo[n];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, in;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> in;
    pair<int, int> f = fib(in);
    cout << "fib(" << in << ") = " << f.second << " calls = " << f.first << "\n";
    steps = 0;
  }

  return 0;
}