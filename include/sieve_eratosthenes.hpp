#ifndef SIEVE_OF_ERATOSTHENES 
#define SIEVE_OF_ERATOSTHENES

#include <vector>

// The sieve of eratosthenes was modified to return a pair containing the number of primes in the form 4*n + 1 and 4*n + 3
std::pair<long long, long long> sieve_eratosthenes(long long &n);

#endif