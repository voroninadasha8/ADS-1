// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value <= 1) {
        return false;
    }
    for (int i = 2; i*i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t j = 2; 
    uint64_t k = 0;  
    while (true) {
        if (checkPrime(j)) {
            k++;
        }
        if (k == n) {
            break;
        }
        j++;
    }
    return j;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t summa = 0;
    for (uint64_t i = 2; i < hbound; i++) {
      if (checkPrime(i)) {
        summa += i;
      }
    }
    return summa;
}




bool checkPrime(uint64_t value) {
  if (value <= 1) {
        return false;
    }
    for (int i = 2; i*i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t j = 2; 
    uint64_t k = 0;  
    while (true) {
        if (checkPrime(j)) {
            k++;
        }
        if (k == n) {
            break;
        }
        j++;
    }
    return j;
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
  uint64_t summa = 0;
    for (uint64_t m = 2; m < hbound; m++) {
      if (checkPrime(m)) {
        summa += m;
      }
    }
    return m;
}
