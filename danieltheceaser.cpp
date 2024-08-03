#include <iostream>
using namespace std;

int main()
{
  int vals[] = {10, 20, 30};
  int saad_el_so8ayar = 100;
  int saad_el_so8ayar2 = 200;
  int saad_el_so8ayar3 = 300;
  // Write Your Code Here
  vals[0] = saad_el_so8ayar;
  vals[1] = saad_el_so8ayar2;
  vals[2] = saad_el_so8ayar3;
  cout << vals[0] << "\n"; // 100
  cout << vals[1] << "\n"; // 200
  cout << vals[2] << "\n"; // 300
  return 0;
}