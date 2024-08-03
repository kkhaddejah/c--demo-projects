#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  for (int i = 0; i < 3; i++)
  {
    cout << "========="
         << "\n";
    cout << "= " << friends[i] << " ="
         << "\n";
    cout << "=================="
         << "\n";
    cout << "= " << friends[i][0] << ", " << friends[i][1] << ", " << friends[i][2] << ", " << friends[i][3] << ", " << friends[i][4] << " ="
         << "\n";
    cout << "=================="
         << "\n";
  }
  int j = 0;
  while (j < 3)
  {
    cout << "========="
         << "\n";
    cout << "= " << friends[j] << " ="
         << "\n";
    cout << "=================="
         << "\n";
    cout << "= " << friends[j][0] << ", " << friends[j][1] << ", " << friends[j][2] << ", " << friends[j][3] << ", " << friends[j][4] << " ="
         << "\n";
    cout << "=================="
         << "\n";
    j++;
  }

  // // Output Needed
  // =========
  // = Ahmed =
  // ==================
  // == A, h, m, e, d =
  // ==================

  // =========
  // = Osama =
  // ==================
  // == O, s, a, m, a =
  // ==================

  // =========
  // = Ameer =
  // ==================
  // == A, m, e, e, r =
  // ==================
  return 0;
}