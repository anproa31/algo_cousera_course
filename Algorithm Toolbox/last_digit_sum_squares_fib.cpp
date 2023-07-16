#include <iostream>
#include <vector>
using namespace std;

long long fib(long long n) {
  vector<int> last_digits = {0, 1};

  for (int i = 2; i <= 60; i++) {
    last_digits.push_back((last_digits[i - 1] + last_digits[i - 2]) % 10);
  }

  return last_digits[n % 60];
}

int main() {
    long long n = 0;
    std::cin >> n;

    std::cout << (fib(n) % 10 * fib(n+1) % 10) % 10 << '\n';
    return 0;
}