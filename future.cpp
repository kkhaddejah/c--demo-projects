#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[], int numssize)
{
  int smallestNeg = INT_MIN;
  for (int i = numssize - 1; i >= 0; i--)
  {
    if (numbers[i] < 0 && numbers[i] > smallestNeg)
    {
      smallestNeg = numbers[i];
    }
  }
  return smallestNeg;
}

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
  int numssize = sizeof(numbers) / sizeof(numbers[0]);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}