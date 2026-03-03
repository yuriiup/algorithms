#include <cmath>
#include <iostream>

void find_nearest(int *arr, int sizes, int num);

int main() {
  int sizes;
  std::cin >> sizes;

  int *array = new int[sizes];
  for (int i = 0; i < sizes; i++) {
    std::cin >> array[i];
  }

  int number;
  std::cin >> number;

  find_nearest(array, sizes, number);
  delete[] array;

  return 0;
}

void find_nearest(int *arr, int sizes, int num) {
  int min_dist = std::abs(arr[0] - num);
  int near_number = arr[0];

  for (int i = 1; i < sizes; i++) {
    if (std::abs(arr[i] - num) < min_dist) {
      near_number = arr[i];
      min_dist = std::abs(arr[i] - num);
    }
  }
  std::cout << near_number;
}