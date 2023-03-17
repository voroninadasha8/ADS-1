// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int i = 2;
  if (value > 1) {
    for (i; i <= sqrt(value); i++) {
      if (value % i == 0) {
        return false;
      } else {
        return true;
      }
    }
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  uint64_t res = 0;
  uint64_t num = 0;
  uint64_t i = 2;
  for (i; num < n; i++) {
    if (checkPrime(i)) {
      res = i;
      num ++;
    }
    return res;
  }
}

uint64_t nextPrime(uint64_t value) {
  for (uint64_t i = value + 1; ; i++) {
    if (checkPrime(i)) {
      return i;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t count = 0;
  if (hbound > 2) {
    for (int i = 2; i < hbound; i++) {
      if (checkPrime(i)) {
        count += i;
      }
    }
  }
  return count;
}
