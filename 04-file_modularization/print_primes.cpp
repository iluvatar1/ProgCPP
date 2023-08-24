// Imprime la lista de números primos entre 1 y 150
#include <iostream>
#include <cmath>

bool isprime(long int n);

int main(int argc, char **argv) {
    int nmin = 1;
    int nmax = 150;
    //std::cout << isprime(1008) << "\n";
    //std::cout << isprime(1009) << "\n";
    //std::cout << isprime(2000000011) << "\n";
    //std::cout << isprime(20000000089) << "\n";
    for(int ii = nmin; ii <= nmax; ++ii) {
        if (isprime(ii)) {
            std::cout << ii << " ";
        }
    }
    std::cout << "\n";
    return 0;
}

bool isprime(long int n) {
    bool flag = true;
    for (long int ii = 2; ii <= std::sqrt(n); ii++) {
        if (n%ii == 0) {
            return false;
        }
    }
    return flag;
}
