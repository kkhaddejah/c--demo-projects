#include <iostream>
using namespace std;

int main()
{
  int by = 82; // by => Birth Year
  int s = 500; // s => Salary
  if (by > 80)
  {
    if (s < 600)
      cout << "Ok\n";
    else
      cout << "High\n";
  }
  else
  {
    cout << "Not Ok\n";
  }
  string result = (by >= 82) ? "Age is ok" : "Age is not ok";
  cout << result << endl;
  return 0;
}