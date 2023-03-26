// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) {
        return false;
    }
    for (uint64_t i = 2; i*i]i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t res = 0;
  uint64_t m = 0;
  uint64_t k = 2;
  for (k; m < n; k++) {
    if (checkPrime(k)) {
      res = k;
      m ++;
    }
    return res;
  }
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t res = 0;
  if (hbound >= 3) {
    for (uint64_t j = 2; j < hbound; j++) {
      if (checkPrime(j)) {
        res += j;
      }
    }
  }
  return res;
}
