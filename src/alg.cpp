// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"



bool checkPrime(uint64_t value) {
  if (value < 2) {
        return false;
    }
    for (int i = 2; i*i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
