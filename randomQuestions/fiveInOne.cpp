#include <iostream>
#include <cmath>
using namespace std;

// check prime numbers
bool isPrime(int num) {
    if (num <= 1)
      return false;
    if (num <= 3)
      return true;
    if (num % 2 == 0 || num % 3 == 0)
      return false;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;

    return true;
}

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i)
        if (num % i == 0)
            count++;

    return count;
}

int main() {
    int size;
    cin >> size;
    
    int A[size];
    for (int i = 0; i < size; ++i)
        cin >> A[i];
    
    int maxNum = A[0];
    int minNum = A[0];
    
    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisors = 0;
    int numWithMaxDivisors = A[0];

    // find maximum number and minimum number
    for (int i = 0; i < size; ++i) {
        maxNum = max(maxNum, A[i]);
        minNum = min(minNum, A[i]);
        
        if (isPrime(A[i]))
	  primeCount++;
        if (isPalindrome(A[i]))
	  palindromeCount++;
        
        int divisors = countDivisors(A[i]);
	// check if number with max divisors is larger the pervious one
        if (divisors > maxDivisors || (divisors == maxDivisors && A[i] > numWithMaxDivisors)) {
            maxDivisors = divisors;
            numWithMaxDivisors = A[i];
        }
    }
    
    cout << "The maximum number : " << maxNum << endl;
    cout << "The minimum number : " << minNum << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << numWithMaxDivisors << endl;
    
    return 0;
}
