#include <iostream>

void counter();

int main() {
  counter();
  return 0;
}

void counter() {
  int prev{}, current{}, next{};
  int more = 0;
  std::cin >> prev >> current;
  while (std::cin >> next) {
    if (current > prev && current > next) {
      more++;
    }
    prev = current;
    current = next;
  }

  std::cout << more;
}