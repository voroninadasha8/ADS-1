// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  for (uint64_t i = 2; i*i <= value; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t j = 0;
  uint64_t k = 0;
  while (n > 0) {
    if (checkPrime(k)) {
      j = k;
      n -= 1;
    }
    k += 1;
  }
  return(j);
}

//uint64_t nextPrime(uint64_t value) {
// вставьте код функции
//}

//uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
//}
