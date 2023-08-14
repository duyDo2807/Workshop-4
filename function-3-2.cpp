#include <iostream>

int *readNumbers() {
  int *numbers = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cin >> numbers[i];
  }
  return numbers;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; ++i) {
    std::cout << i << " " << numbers[i] << std::endl;
  }
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
  if (length < 1) {
    return false;
  }
  for (int i = 0; i < length; i++) {
    if (numbers1[i] != numbers2[i]) {
      return false;
    }
  }
  return true;
}

int *reverseArray(int *numbers1, int length) {
  int *reverseNumbers = new int[10];
  for (int i = 0; i < length; i++) {
    reverseNumbers[i] = numbers1[9 - i];
  }
  return reverseNumbers;
}