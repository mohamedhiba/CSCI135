/* 
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong-Yi
Assignment: Lab 5A, 5B, 5C, 5D, 5E, 5F, 5G
*/
#include <iostream>
using namespace std;

//  A
bool isDivisibleBy(int n, int d) {
    if(d == 0) { // checks if n is divisible by d 
        return false;
    }

    if(n % d == 0) { // if remainder is 0, it IS divisible
        return true;
    } else {
        return false;
    }
}

//  B
bool isPrime(int n) {
    if(n < 2) { // 1 is not a prime number as well as numbers below
        return false;
    }

    for(int i = 2; i < n; i++) { // dividing by the value of the for loop
        if(isDivisibleBy(n, i)) { 
            return false;
        }
    }

    return true;
}

//  C
int nextPrime(int n) {
    int i = n + 1;

    while( !(isPrime(i)) ) { // if i is NOT prime, increase i and check until next n is prime
        i++;
    }

    return i;
}

//  D
int countPrimes(int a, int b) {
    int num = 0;

    for(int i = a; i <= b; i++) { // represents interval
        if(isPrime(i)) { // checks if i is prime
            num++; // if prime, increase by 1 and repeat for all primes in interval
        }
    }

    return num;
}

//  E
bool isTwinPrime(int n) {
    if( !(isPrime(n)) ) { // if n is not prime, auto false
        return false;
    }

    if(isPrime(n - 2) || isPrime(n + 2)) { // checks left and right side of n by 2 if either is prime
        return true;
    } else {
        return false;
    }
}

//  F
int nextTwinPrime(int n) {
    int i = n + 1; // same logic as nextPrime

    while( !(isTwinPrime(i)) ) { // isTwinPrime instead of isPrime
        i++;
    }

    return i;
}

//  G
int largestTwinPrime(int a, int b) {
    for(int i = b; i >= a; i--) { // reversed for loop to check max first
        if(isTwinPrime(i)) { // if max number is prime, return value
            return i;
        } 
    }

    return -1; // if num is NOT within interval, return -1
}

