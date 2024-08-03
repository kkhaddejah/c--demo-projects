#include <iostream>
using namespace std;

int main()
{
  for (int i = 30; i > 2; i -= 3)
  {
    cout << i << "\n";
  }
  // Output Needed
  // 30
  // 27
  // 24
  // 21
  // 18
  // 15
  // 12
  // 9
  // 6
  // 3
  for (int j = 30; j > 2; j -= 3)
  {
    if (j % 2 == 1)
    {
      cout << j << "\n";
    }
  }
  // Without Even Numbers
  // 27
  // 21
  // 15
  // 9
  // 3
  return 0;
}