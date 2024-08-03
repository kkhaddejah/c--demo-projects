#include <iostream>
using namespace std;

// Write Your Functions Here
double avg(double money[], double monsize)
{
  int totalSalary = 0;
  for (int i = 0; i < monsize; i++)
  {
    totalSalary += money[i];
  }
  return totalSalary / monsize;
}

int main()
{
  double money[] = {10, 20, 15, 25, 30, 35};
  double monsize = sizeof(money) / sizeof(money[0]);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}