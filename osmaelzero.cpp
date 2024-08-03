#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int numbers[], int numssize, int noneed)
{
  int sum = 0;
  for (int i = 1; i < numssize - 1; i++)
  {
    sum += numbers[i];
  }
  return sum;
}

int main()
{
  int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = sizeof(numbers) / sizeof(numbers[0]);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}