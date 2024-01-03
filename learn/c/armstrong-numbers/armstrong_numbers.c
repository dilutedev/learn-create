#include "armstrong_numbers.h"

#include <math.h>

bool is_armstrong_number(int candidate) {
  if (candidate < 10) {
    return true;
  }

  int count = 0;
  int clone = candidate;
  int final_result = candidate;

  while (clone != 0) {
    clone = clone / 10;
    count++;
  }

  double sum = 0;
  while (candidate > 0) {
    int digit = candidate % 10;
    candidate = candidate / 10;

    sum += pow(digit, count);
  }

  return sum == final_result;
}
