#include <iostream>
using namespace std;

int main()
{
  int index = 10;
  int jump = 2;

  for (;;)
  {
    cout << index << "\n";
    index -= jump;
    if (index < 3)
    {
      break;
    }
  }

  // Output Needed
  // 10
  // 8
  // 6
  // 4
  return 0;
}