#include <iostream>

void bubble(int *arr, const int length);
void output(int *arr, const int length);

int main() {
  const int length = 3;

  int array[length];
  for (int i = 0; i < length; i++) {
    std::cin >> *(array + i);
  }

  bubble(array, length);
  output(array, length);

  return 0;
}

void bubble(int *arr, const int length) {
  int temp;
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (*(arr + j + 1) > *(arr + j)) {
        temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }
}

void output(int *arr, const int length) {
  std::cout << *(arr + length / 2) << std::endl;
}