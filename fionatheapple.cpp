#include <iostream>
using namespace std;

int main()
{
  // Test Case 1
  int age = 18;
  int points = 450;
  if (age < 18)
  {
    cout << "Age is not allowed, ";
  }
  else if (age >= 18)
  {
    cout << "Age is allowed, ";
  }

  if (points < 500)
  {
    cout << "Points are not enough \n";
  }
  else if (points > 500)
  {
    cout << "Points are enough \n";
  }

  // Output
  // "No Age Is Not Ok"
  // "No Points Is Not Ok"

  // Test Case 2
  int age2 = 20;
  int points2 = 450;
  if (age2 > 18)
  {
    cout << "Age is allowed, ";
  }
  else if (age2 < 18)
  {
    cout << "Age is not allowed, ";
  }
  if (points2 > 500)
  {
    cout << "Points are enough\n";
  }
  else if (points2 < 500)
  {
    cout << "Points are not enough\n";
  }

  // Output
  // "Yes Age Is Ok"
  // "No Points Is Not Ok"

  // Test Case 3
  int age3 = 20;
  int points3 = 650;
  if (age3 > 18)
  {
    cout << "Age is allowed, ";
  }
  else if (age3 < 18)
  {
    cout << "Age is not allowed, ";
  }
  if (points3 > 500)
  {
    cout << "Points are enough";
  }
  else if (points3 < 500)
  {
    cout << "Points are not enough";
  }
  return 0;
  // Output
  // "Yes Age Is Ok"
  // "Yes Points Is Ok"
}