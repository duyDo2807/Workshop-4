#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);

int main() {
  int *numbers1 = readNumbers();
  int *numbers2 = reverseArray(numbers1, 10);
  bool equal = equalsArray(numbers1, numbers2, 10);
  std::cout << std::boolalpha;
  std::cout << equal << std::endl;
  delete[] numbers1;
  delete[] numbers2;
  return 0;
}