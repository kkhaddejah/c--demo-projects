#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int vals[]{100, 200, 250, 400, 200};

  // Needed Output
  // "First Number + Last Number Is Larger Than Middle Number"
  // "100 + 200 = 300"
  // "300 > 250"
  if (vals[0] + vals[4] > vals[2])
  {
    cout << "First Number + Last Number Is Larger Than Middle Number\n";
    cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n";
    cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
  }

  // Example 2
  int vals2[]{100, 200, 500, 400, 200};

  if (vals2[1] + vals2[3] > vals2[2])
  {
    cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
    cout << vals2[1] << " + " << vals2[3] << " = " << vals2[1] + vals2[3] << "\n";
    cout << vals2[1] + vals2[3] << " > " << vals2[2] << "\n";
  }

  // Needed Output
  // "Second Number + Before Last Number Is Larger Than Middle Number"
  // "200 + 400 = 600"
  // "600 > 500"

  // Example 3
  int vals3[]{100, 200, 600, 400, 200};
  if (vals3[0] + vals3[4] > vals3[2])
  {
    cout << "First Number + Last Number Is Larger Than Middle Number\n";
    cout << vals3[0] << " + " << vals3[4] << " = " << vals3[0] + vals3[4] << "\n";
    cout << vals3[0] + vals3[4] << " > " << vals3[2] << "\n";
  }
  else
    cout << "Middle Number Is The Largest\n";
  cout << "600";
  // Needed Output
  // "Middle Number Is The Largest"
  // "600"
  return 0;
}