#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numssize)
{
  int smallest = INT_MAX;
  for (int i = 0; i < numssize; i++)
  {
    if (numbers[i] > 0 && numbers[i] < smallest)
    {
      smallest = numbers[i];
    }
  }
  return smallest;
}

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
  int numssize = sizeof(numbers) / sizeof(numbers[0]);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}