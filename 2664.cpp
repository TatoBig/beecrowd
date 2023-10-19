#include <iostream>
#include <map>

using namespace std;

map<string, int> memo;
map<string, int> memo2;

int perm(int init, int lvl, int min, int max)
{
  string key = to_string(abs((max - init) - (init - min))) + "," + to_string(lvl);
  string key2 = to_string(abs((max - init) - (init - min))) + "," + to_string(lvl);

  int &result = memo[key];
  if (result) {
    return memo[key];
  }
  if (init < min)
    return 0;
  if (init > max)
    return 0;
  if (lvl == 1)
  {
    return 1;
  }

  memo[key] = perm(init + 1, lvl - 1, min, max) + perm(init - 1, lvl - 1, min, max);

  return memo[key];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T, M, N;

  cin >> T;
  cin >> M;
  cin >> N;

  int sum = 0;

  for (int i = M; i <= N; i++)
  {
    sum += perm(i, T, M, N);
    cout << "Finished: " << i << " with " << sum << "permutation \n";
  }

  cout << sum << "\n";

  return 0;
}