#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const long long int half = 1000000000000LL;
  long long int n1_h = 0, n1_l = 0, n2_h = 0, n2_l = 1, n3_h, n3_l, i, number;
  cout << "Enter the number of elements: ";
  cin >> number;
  cout << n1_l << "\n" << n2_l << "\n"; // printing 0 and 1
  // loop starts from 2 because 0 and 1 are already printed
  cout.fill('0');
  for (i = 2; i < number; ++i) {
    // n3 = n1 + n2;
    n3_l = n1_l + n2_l;
    n3_h = n1_h + n2_h + (n3_l / half);
    n3_l %= half;
    // print n3
    if (n3_h > 0) {
      cout << n3_h << setw(12) << n3_l;
    } else {
      cout << n3_l;
    }
    cout << "\n";
    // n1 = n2;
    n1_h = n2_h; n1_l = n2_l;
    // n2 = n3;
    n2_h = n3_h; n2_l = n3_l;
  }
  return 0;
}