#include <climits>
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

int secondSmallestSum(int *numbers, int length) {
  if (length <= 1) {
    return 0;
  }
  int smallestSum = INT_MAX;
  int secondSmallestSum = INT_MAX;
  for (int i = 0; i < length; i++) {
    int currentSum = 0;
    for (int j = i; j < length; j++) {
      currentSum = currentSum + numbers[j];
      if (currentSum < smallestSum) {
        secondSmallestSum = smallestSum;
        smallestSum = currentSum;
      } else if (currentSum < secondSmallestSum && currentSum != smallestSum) {
        secondSmallestSum = currentSum;
      }
    }
  }
  return secondSmallestSum;
}