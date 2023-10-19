#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  double a, b, c;


  while (cin >> a)
  {
    cin >> b;
    cin >> c;

    double s = (a + b + c) / 2.000;
    double m = 4.000 / 3.000;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    area = area * m;

    if (!isnan(area) && area > 0.000)
    {
      cout << fixed << setprecision(3) << area << "\n";
    }
    else
    {
      cout << "-1.000\n";
    }
  }

  return 0;
}