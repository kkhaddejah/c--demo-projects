#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  if (a > b && a > c)
  {
    cout << a << " Is the greatest number";
  }
  else if (b > a && b > c)
  {
    cout << b << " Is the greatest number";
  }
  else
    cout << c << " Is the greatest number";

  return 0;
}