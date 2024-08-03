#include <array>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int nums[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 11; i++)
  {
    cout << nums[i] << "\n";
  }
  // For Output
  // 0
  // 1
  // 2
  // 3
  // 4
  // 5
  // 6
  // 7
  // 8
  // 9
  // 10
  int i = 0;
  while (i < 11)
  {
    cout << nums[i] << "\n";
    i++;
  }
  // While Output
  // 0
  // 1
  // 2
  // 3
  // 4
  // 5
  // 6
  // 7
  // 8
  // 9
  // 10
  int j = 0;
  do
  {
    cout << nums[j] << "\n";
    j++;
  } while (j < 11);

  // Do While Output
  // 0
  // 1
  // 2/
  // 3
  // 4
  // 5
  // 6
  // 7
  // 8
  // 9
  // 10
  return 0;
}