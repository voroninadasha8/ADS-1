// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value < 2) {
    return false;
  }
  for (int i = 2; i <= value/2; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
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

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  for (;;) {
    value+=1;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  hbound -= 1;
  uint64_t summa = 0;
  for (int m = 2; m < hbound; m++) {
    if (checkPrime(m)) {
      summa+=m;
    }
  }
  return summa;
}
