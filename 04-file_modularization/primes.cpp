#include "primes.h"

bool isprime(long int n) {
    bool flag = true;
    for (long int ii = 2; ii <= std::sqrt(n); ii++) {
        if (n%ii == 0) {
            return false;
        }
    }
    return flag;
}
