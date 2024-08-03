#include <iostream>
using namespace std;

int main()
{
  for (int i = 2; i <= 128; i = i * 2)
  {
    cout << i << "\n";
  }
  int j = 2;
  while (j <= 128)
  {
    cout << j << "\n";
    j = j * 2;
  }

  // Output Needed
  // 2
  // 4
  // 8
  // 16
  // 32
  // 64
  // 128
  return 0;
}