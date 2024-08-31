# Counting Primess

This repository implements a modified version of the classical Sieve of Eratosthenes algorithm to count all prime numbers up to a specified integer $n$, denoted by $\pi(n)$  and also maintain how many primes fall into specific categories: those of the form $( 4k + 1 $), denoted by $\pi_1(n)$, and $( 4k + 3 $), denoted by $\pi_3(n)$.

Additionally, it compares these prime counts with two prime approximation functions and tests the theory that the ratio of primes of form $\pi_1$ to $\pi_3$ approaches 1 as $n$ approaches infinity.

## Algorithm Overview

### Basic Idea:

1. **Modified Initialization**:
   - Diferent to the classical sieve, we count how many prime numbers are less than equal $n$.
   - Additionally, maintain counters for primes of the form $\pi_1$ and $\pi_3$.

2. **Prime Count Comparisons**:
   After processing, the algorithm compares the prime counts with two approximation functions:

  - **$S(n)$ Approximation**:
     
      The approximation function  $S(n)$ is given by:
    

$$\ S(n) = \frac{n}{\log n} \left( 1 + \left[ \sum_{k=0}^{12} a_k (\log \log n)^k \right]^{-1/4} \right) \ $$

  The coefficients $\( a_k \)$ used in the approximation function \( S(x) \) are represented by the following array:

```cpp
double summation_array[] = {
    229168.50747390, -429449.7206839, 199330.41355048,
    28226.22049280, 0, 0, -34712.81875914, 0,
    33820.10886195, -25379.82656589, 8386.14942934,
    -1360.44512548, 89.14545378
};
```
  - **Prime Number Theorem**
  
      The Prime Number Theorem approximation, created by Gauss and Legendre, states that

    
$$ \pi(n) \approx  \frac{n}{\log n} $$


3. **Prime Form Ratio Analysis**:
The code includes tests to explore the theory that

$$ \lim_{n \to \infty} \frac{\pi_1(n)}{\pi_3(n)} = 1 $$


## Example Usage

### Input

The program prompts the user to enter an integer $n$. This integer represents the upper limit for which primes will be counted and analyzed.


### Output

After entering the integer, the program performs the following calculations and outputs the results:

- **$π(n)$**: The total count of primes up to $n$.
- **$S(n)$**: The approximation of the prime counting function using the provided formula.
- **Prime Number Theory (PNT)**: The approximation of the prime counting function using the Prime Number Theorem.
- **Differences**: The difference between the actual prime count and the approximations from $S(n)$ and PNT.
- **$\pi_1$**: The count of primes of the form $( 4k + 1 $).
- **$\pi_3$**: The count of primes of the form $( 4k + 3 $).
- **Ratio**: The ratio of $\pi_1$ to $\pi_3$.

## Applications and Limitations

This modified sieve is particularly useful for studying the distribution of primes within specific arithmetic forms and testing related number theory hypotheses. Unlike the classical sieve, it does not requires $O(n)$ space. However, its complexity keeps $O(n \log \log n)$, that can be very slow for very large $n$.

## References

- Wikipedia: [Prime-counting function](https://en.wikipedia.org/wiki/Prime-counting_function)
- Wikipedia: [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
- *Números Inteiros e Criptografia RSA*.
- Research papers on prime number generation and number theory.
