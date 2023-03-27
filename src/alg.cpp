// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
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

//uint64_t nPrime(uint64_t n) {
// вставьте код функции

//}

//uint64_t nextPrime(uint64_t value) {
//uint64_t nextPrime(uint64_t value) {
// вставьте код функции
//}
//}

//uint64_t sumPrime(uint64_t hbound) {
//uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
//}
//}
