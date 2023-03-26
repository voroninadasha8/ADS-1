// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  unit64_t i=2;
  for(i; i*i<value; i++)
    if(value % i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
  unit64_t = 0;
  unit64_t value=1;
  while (count < n) {
    value++;
    if(checkPrime(value))
      count ++;
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t j = value + 1;
  for (j; ; j++) {
    if (checkPrime(j)) {
      return j;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  unit64_t summ=0;
  unit65_t k=2
  if (hbound > 2) {
    for (k; k < hbound; k++) {
      if (checkPrime(i))
        summ += i;
    }
  }
}
