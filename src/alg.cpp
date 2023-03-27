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
    uint64_t num = 0;
    uint64_t temp = 0;
    while (n > 0) {
        if (checkPrime(temp)) {
            num = temp;
            n -= 1;
        }
        temp += 1;
    }
    return(num);
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
    uint64_t sum = 0;
    for (int i = 2; i < hbound; ++i) {
        if (checkPrime(i)) {
            sum+=i;
        }
    }
    return sum;
}
