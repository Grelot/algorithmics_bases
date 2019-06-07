# algorithmique_bases
Basic algorithm problem and their solutions 

# 1. Two Sum

## PROBLEM

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## SOLUTION

### One pass
![Alt text](https://github.com/Grelot/algorithmics_bases/blob/master/schema_solutions/two_sums.svg)
<img src="https://github.com/Grelot/algorithmics_bases/blob/master/schema_solutions/two_sums.svg">

### Complexity Analysis

* Time Complexity: _O(n)_. I visit the n elements of the array only once.
* Space Complexity: _O(2n)_. I store at most all the elements of the array and corresponding positions.

## SOURCE CODE

```
g++ source_codes/two_sum.cpp
```


# 2. Count Primes

## PROBLEM

Count the number of prime numbers less than a non-negative number, _n_.

## SOLUTION

### Sieve of Eratosthenes

SCHEMA A FAIRE

### Complexity Analysis

* Time Complexity: _O(n log n)_. I visit each odd below n and remove multiples.
* Space Complexity: _O(n)_. I store at most n elements true/false is a prime number condition.

## SOURCE CODE

```
g++ source_codes/count_primes.cpp
```