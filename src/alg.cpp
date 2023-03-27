// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value <= 1) {
        return false;
    }
    for (int i = 2; i <= value / 2; ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t res = 0;
    uint64_t t = 0;
    while (n > 0) {
        if (checkPrime(t)) {
            res = t;
            n -= 1;
        }
        t += 1;
    }
    return(res);
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
    for (int i = 2; i < hbound; ++i) {
        if (checkPrime(i)) {
            summa+=i;
        }
    }
    return summa;
}
