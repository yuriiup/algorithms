#include <cmath>
#include <iomanip>
#include <iostream>

void radicals(int a, int b, int c);

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  radicals(a, b, c);

  return 0;
}

void radicals(int a, int b, int c) {
  double D = (b * b) - (4 * a * c);

  if (D < 0) {
    std::cout << 0 << std::endl;
    return;
  }

  if (D == 0) {
    std::cout << 1 << std::endl;
    double x_1 = -b / (2.0 * a);
    std::cout << std::fixed << std::setprecision(6) << x_1 << std::endl;
    return;
  }

  double x_1 = (-b - sqrt(D)) / (2.0 * a);
  double x_2 = (-b + sqrt(D)) / (2.0 * a);

  std::cout << 2 << std::endl;
  if (x_1 > x_2) {
    std::cout << std::fixed << std::setprecision(6) << x_2 << " " << x_1 << std::endl;
  } else {
    std::cout << std::fixed << std::setprecision(6) << x_1 << " " << x_2 << std::endl;
  }
}