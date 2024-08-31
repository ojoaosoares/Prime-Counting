#include "sieve_eratosthenes.hpp"
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N: ";
    long long n; std::cin >> n;

    std::pair<long long, long long> primes = sieve_eratosthenes(n);


    std::cout << "Pi function: " << 
    std::cout << primes.first << ' ' << primes.second << '\n';
}
