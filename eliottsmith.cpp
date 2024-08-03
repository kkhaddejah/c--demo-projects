#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numssize)
{
  int evenNums = 0;
  int oddNums = 1;
  // Add even nums
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      evenNums += numbers[i];
    }
    if (numbers[i] % 2 > 0)
    {
      oddNums *= numbers[i];
    }
  }
  return oddNums + evenNums;
}
int main()
{
  int numbers[] = {10, 20, 3, 30, 5, 7, 40};
  int numssize = sizeof(numbers) / sizeof(numbers[0]);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}