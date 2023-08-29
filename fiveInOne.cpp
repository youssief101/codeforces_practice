#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i < sqrt(num); i++)
    if (num % i == 0)
      return false;

  return true;
}

int reverse(int num) {
  int reversed = 0;
  while (num > 0) {
    reversed = num % 10 + reversed * 10;
    num /= 10;
  }
  
  return reversed;
}

bool isPalindrome(int ordered, int reversed) {
  if (ordered < 10)
    return true;
  if (ordered == reversed)
    return true;

  return false;
}

int findMax(int arr[], const int size) {
  int max = arr[0];
  for (int i = 0; i < size; i++)
    if (max < arr[i])
      max = arr[i];
  return max;
}

int findMin(int arr[], const int size) {
  int min = arr[0];
  for (int i = 0; i < size; i++)
    if (min > arr[i])
      min = arr[i];
  return min;
}

int countPrime(int arr[], const int size) {
  int primeCtr = 0;
  for (int i = 0; i < size; i++)
    if (isPrime(arr[i]))
      primeCtr++;
  return primeCtr;
}

// count palindrome
int countPalindrome(int arr[], const int size) {
  int PalindromeCtr = 0;
  for (int i = 0; i < size; i++)
    if (isPalindrome(arr[i], reverse(arr[i])))
      PalindromeCtr++;
  return PalindromeCtr;
}

// count the maximum of divisors
int countDivisors(int arr[], const int size) {
  int maxDividend = arr[0], divCtr = 0, maxDivs = 0;
  int i = 0;
  while (i < size) {
    divCtr = 0;
    for (int k = 1; k < sqrt(arr[k]); k++)
      if (arr[i] % k == 0)
	divCtr++;
    if (maxDivs < divCtr) {
      maxDivs = divCtr;
      maxDividend = arr[i];
    } else if (maxDivs == divCtr) {
      if (maxDividend != arr[i] && maxDividend < arr[i])
	maxDividend = arr[i];
    }
    i++;
  }
  return maxDividend;
}

int main() {
  // get the array size
  int n = 0;
  cin >> n;

  const int size = n;
  int arr[size];
  // get the elements of the array
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  // find the maximum number
  int maxNum = findMax(arr, size);
  cout << "The maximum number : " << maxNum << endl;

  // find the minimum number
  int minNum = findMin(arr, size);
  cout << "The minimum number : " << minNum << endl;

  // find number of prime numbers:
  int primNum = countPrime(arr, size);
  cout << "The number of prime numbers : " << primNum << endl;

  // find number of palindrome numbers:
  int palindromeNum = countPalindrome(arr, size);
  cout << "The number of palindrome numbers : " << palindromeNum << endl;
  
  // max number of divisors
  int maxDivNums = countDivisors(arr, size);
  cout << "The number that has the maximum number of divisors : " << maxDivNums << endl;
  
  return 0;
}
