// Description
// We say that x is a perfect square if, for some integer b, x = b^2. Similarly, x is a perfect cube if, for some integer b, x = b^3. More generally, x is a perfect pth power if, for some integer b, x = b^p. Given an integer x you are to determine the largest p such that x is a perfect pth power.
// Input specification
// Each test case (no more than 50) is given by a line of input containing x. The value of x will have magnitude at least 2 and be within the range of a (32-bit) int in C, C++, and Java. A line containing 0 follows the last test case.
// Output specification
// For each test case, output a line giving the largest integer p such that x is a perfect pth power.
// Sample input
// 17
// 1073741824
// 25
// -4096
// 0
// Sample output
// 1
// 30
// 2
// 3

#include <iostream>
#include <cmath>
#include <stdint.h>

int64_t getMaxPower(int64_t X) {
  bool is_negative = X < 0;
  uint8_t base_start = (X % 2 == 0) ? 2 : 3;
  for (int64_t base = base_start; (base * base) <= ( is_negative ? -X : X ); base += 2)
  {
    int64_t val = is_negative ? -X : X;
    uint16_t pth = 0;
    while (val % base == 0)
    {
      val = val / base;
      pth++;
      if (val == 1 && !(is_negative && pth % 2 == 0)) {
        return pth;
      }
    }
  }
  return 1;
}

int main() {
    int64_t X = -1;
    std::cin >> X;
    while (X)
    {
        std::cout << getMaxPower(X) << "\n";
        std::cin >> X;
    }
    return 0;
}