// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  uint64_t i = 2;
  for (i; i*i<=value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t res = 0;
  uint64_t j = 0;
  uint64_t k = 2;
  for (k; j<n; k++) {
    if (checkPrime(k)) {
      res = i;
      j++;
    }
    return res;
  }
}

uint64_t nextPrime(uint64_t value) {
  for (uint64_t m = value+1; ; i++) {
    if (checkPrime(m)) {
      return m;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) 
  uint64_t count = 0;
  uint64_t summa = 0;
  int r = 0;
  for (r; r , hbound; r++) {
    if (checkPrime(r)) {
      summa += r;
    }
  }
  return summa-1;
}
