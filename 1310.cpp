#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int in, c = 0, n, pDC, best = 0, sum = 0;

  while (cin >> in)
  {
    if (c == 0)
    {
      n = in;
    }
    else if (c == 1)
    {
      pDC = in;
    }
    else if (c == n + 2)
    {
      cout << best << "\n";
      c = 0;
      n = in;
      sum = 0;
      best = 0;
    }
    else
    {
      sum = max(in - pDC, sum + in - pDC);
      best = max(best, sum);
    }

    c++;
  }
  cout << best << "\n";

  return 0;
}