#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Please Type A Number Between 0 And 150\n";
  cin >> num;
  if (num < 10)
  {
    cout << "00" << num << "\n";
  }
  if (num > 10 || num < 99)
  {
    cout << "0" << num << "\n";
  }
  if (num >= 100)
  {
    cout << num;
  }

  return 0;
}
// If Number Smaller Than 10 "Example 5" Output Will Be => 005
// If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
// If Number Larger Than 100 "Example 115" Output Will Be => 115