#include <iostream>

using namespace std;

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ally[999999], enemy[999999];

  int c = 0, in, s;
  cin >> s;

  while (cin >> in)
  {
    if (c < s)
    {
      enemy[c] = in;
    }
    else
    {
      ally[c - s] = in;
    }
    c++;
  }

  qsort(enemy, s, sizeof(int), compare);
  qsort(ally, s, sizeof(int), compare);

  int points = 0;
  for (int i = 0, j = 0; i < s; i++)
  {
    if (ally[i] > enemy[j]) {
      points++;
      j++;
    }
  }
  cout << points << "\n";
  

  return 0;
}