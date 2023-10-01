#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, d, ing, b, best = 0;
  vector<int> ingredients;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> d;
    cin >> ing;
    cin >> b;
    for (int j = 0; j < ing; j++)
    {
      int in;
      cin >> in;
      ingredients.push_back(in);
    }

    for (int k = 0; k < b; k++)
    {
      int ing_list, idx, amount, sum = 0;
      cin >> ing_list;
      for (int m = 0; m < ing_list; m++)
      {
        cin >> idx;
        cin >> amount;
        sum += ingredients[idx] * amount;
      }
      best = max(best, d / sum);
    }
    cout << best << "\n";
    best = 0;
    ingredients.clear();
  }

  return 0;
}