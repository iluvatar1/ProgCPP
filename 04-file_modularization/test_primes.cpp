// compile as:
// g++ -std=c++17  test_primes.cpp primes.cpp -lCatch2 -lCatch2Main
#include <catch2/catch_test_macros.hpp>
#include "primes.h"

TEST_CASE( "Primes are computed", "[isprime]" ) {
    REQUIRE( isprime( 2) == true );
    REQUIRE( isprime( 3) == true );
    REQUIRE( isprime(10) == false );
    REQUIRE( isprime(1008) == false );
    REQUIRE( isprime(1009) == true );
    REQUIRE( isprime(2000000011) == true );
    REQUIRE( isprime(20000000089) == true );
}
