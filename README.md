# algorithmique_bases
Basic algorithm problem and their solutions 

# 1. Two Sum

## PROBLEM

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## SOLUTION

### One pass
![Alt text](https://github.com/Grelot/algorithmics_bases/schema_solutions/two_sum.svg)
    <img src="https://github.com/Grelot/algorithmics_bases/schema_solutions/two_sum.svg">

### Complexity Analysis

* Time Complexity: _O(n)_. I record the n elements of the array only once.
* Space Complexity: _O(2n)_. I store at most all the elements of the array and corresponding positions.

## SOURCE CODE

```
g++ source_codes/two_sum.cpp
```