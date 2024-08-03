#include <iostream>
using namespace std;

// Write Your Function Here
float money(float m1, int days)
{
  int works = 5;
  // // step 1: remove two days for every week
  while (days > 7)
  {
    works += 5;
    days -= 7;
  }
  return m1 / works;
}

// step2: calculate payment for one day

// for (int i = 0; i < week - 2; i++)
// {

// }

// }
// int main()
// {
/*
  Hints
  21 Days Has 3 "Weeks"
  Every "Week" You Have 2 Holidays.
  Total = 3 * 2 = 6 Holidays From 21 Days
// */
int main()
{
  cout << money(2015, 21) << "\n"; // 134.3330
  cout << money(4500, 40) << "\n"; // 150
}
// cout << works << endl;
// return 0;