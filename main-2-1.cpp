#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern void hexDigits(int *numbers, int length);

int main() {
  int *numbers = readNumbers();
  hexDigits(numbers, 10);
  delete[] numbers;
  return 0;
}