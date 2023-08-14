#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern int secondSmallestSum(int *numbers, int length);

int main() {
  int *numbers = readNumbers();
  int secSmallSum = secondSmallestSum(numbers, 10);
  std::cout << secSmallSum << std::endl;
  delete[] numbers;
  return 0;
}