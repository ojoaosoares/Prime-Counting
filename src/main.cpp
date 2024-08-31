#include "sieve_eratosthenes.hpp"
#include "counting_primes.hpp"
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N: ";
    long long n; std::cin >> n;

    std::pair<long long, long long> primes = sieve_eratosthenes(n);

    std::cout << "π(n): " << primes.first + primes.second + 1 << '\n';

    double s = s_function(n), pnt = prime_number_theory(n);
    std::cout << "S(n): " << s << '\n';
    std::cout << "Prime number theory (PNT) (n): " << pnt << '\n';

    std::cout << '\n';

    std::cout << "π(n) - S(n): " << (primes.first + primes.second + 1) - s << '\n';
    std::cout << "π(n) - PNT(n): "<< (primes.first + primes.second + 1) - pnt << '\n';

    std::cout << '\n';

    std::cout << "π1: p = 1 mod 4, π3: p = 3 mod 4\n";
    std::cout << "π1(n): " << primes.first << '\n';
    std::cout << "π3(n): " << primes.second << '\n';

    std::cout << "π1(n) / π3(n): " << primes.first / (double) primes.second << '\n';




}
