#include "counting_primes.hpp"
#include <cmath>

double summation_aray[] = {229168.50747390, -429449.7206839, 199330.41355048, 28226.22049280, 0, 0, -34712.81875914, 0,
 33820.10886195, -25379.82656589, 8386.14942934, -1360.44512548, 89.14545378};

double s_function(long long &x) {

    double summation = 0;

    for (size_t i = 0; i < 13; i++)
        summation += summation_aray[i] * pow(log(log(x)), i);
    
    return (x/ log(x)) * (1 + pow(summation, -1/ 4));
}

double prime_number_theory(long long &x) {

    return (x/ log(x));
}