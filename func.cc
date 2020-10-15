/*
        Lab1 Team Programming
        Author: Dov Kruger
        For a description of each function, see:
        https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// created by connor eggert
int gcd(int min, int max) {
  if (max == 0) return min;
  return gcd(max, min % max);
}

void round(double array[], int size) {
  for (int j = 0; j < size; j++) {
    array[j] = round(array[j]);
  }
}
// created by sam noack
int countPrimes(int x, int y) {
  bool isNotPrime = false;
  int Primes = 0;

  for (x; x <= y; x++) {
    isNotPrime = false;
    for (int i = 2; i <= x - 1; i++) {
      if (isNotPrime == false) {
        if (x % i == 0) {
          isNotPrime = true;
          break;
        }
      }
    }
    if (isNotPrime == false) {
      Primes++;
    }
  }
  return Primes;
}

int compact(int x[], int a, int b) {
  for (int i = 1; i <= 10; i++) {
    if (i + 1 >= a && i + 1 <= b) {
      x[i] = 0;
    }
  }
  for (int i = 0; i <= 9; i++) {
    if (x[i] == 0) {
    } else {
      cout << x[i] << " - ";
    }
  }
  return 0;
}
// 9.18.2020 Isaac Kupferschmid
// aided by https://www.geeksforgeeks.org/count-number-even-odd-elements-array/
int countEvens(int arr[], int arr_size) {
  int even_count = 0;
  int odd_count = 0;

  // loop to read all the values in the array
  for (int i = 0; i < arr_size; i++) {
    // checking if a number is completely
    // divisible by 2
    if (arr[i] & 1 == 1)
      odd_count++;
    else
      even_count++;
  }

  return even_count;
}

// Isaac Kupferschmid
int lcm(int a, int b) {
  int lcmAB = 0;
  lcmAB = ((a * b) / (__gcd(a, b)));
  return lcmAB;
}

// Eugene Kozlakov 9.17.2020
long double fact(double num) {
  int runFact = 1;
  for (int i = 1; i <= num; i++) {
    runFact *= i;
  }
  return runFact;
}

// Eugene Kozlakov 9.17.2020
int addToEach(int array[], int arraysize, int delta) {
  for (int i = 0; i < arraysize; i++) {
    array[i] += delta;
  }
  return *array;
}

/*
 * Created by Jon Kochanik
 */
int sum(int num1, int num2) {
  int sum = 0;
  for (int i = num1; i <= num2; i++) sum += i;
  return sum;
}

/*
 *  Created by Jon Kochanik
 */

double mean(int arr[], double len) {
  int sum = 0;
  for (int i = 0; i < len; i++) sum += arr[i];
  return sum / len;
}

int prod(int a, int b) {
  int product = 1;
  for (int i = a; i <= b; i++) {
    product *= i;
  }
  return product;
}

int max(int arr[], double len) {
  int max = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

double sumsq(int num1, int num2) {
  double sum = 0;
  for (int i = num1; i <= num2; i++) {
    sum += (i * i);
  }
  return sum;
}

double sum(int arr[], int len) {
  double sum = 0;
  for (int i = 0; i < len; i++) {
    sum += arr[i];
  }
  return sum;
}
// Abhishek
double hypot(double a, double b) { return sqrt(a * a + b * b); }
bool isPrime(int x) {
  // isprime - Alex Palmisano
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      cout << x << " is not a prime number";
      return false;
    }
  }
  cout << x << " is a prime number";
  return true;
}
void print(const double x[], int n) {
  for (int i = 0; i < n; i++) cout << x[i] << ' ';
  cout << '\n';
}

void print(const int x[], int n) {
  for (int i = 0; i < n; i++) cout << x[i] << ' ';
  cout << '\n';
}
void demean(double array[], double n) {
  // Alexander Palmisano
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }

  double mean = sum / n;

  for (int i = 0; i < n; i++) {
    array[i] = array[i] - mean;
  }
}

int main() {
  cout << sum(1, 3) << ' ' << sum(1, 100)
       << '\n';  // should work no problem, right?
  cout << sum(1, 1000000)
       << '\n';  // what should this be? Don't assume it's right, check!

  cout << prod(2, 5) << '\n';  // 2*3*4*5 = 120
  cout << prod(3, 10) << '\n';
  cout << prod(3, 20) << '\n';  // just note whether you think these are right
  cout << prod(3, 30) << '\n';  // if it overflows, you don't have to fix it
  cout << prod(3, 100) << '\n';
  cout << sumsq(1, 5) << '\n';
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  int a = 2, b = 3;
  swap(a, b);
  cout << "after swap a=" << a << " b=" << b << '\n';
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
  cout << "lcm(12, 18)=" << lcm(12, 18) << '\n';
  cout << "fact(10)=" << fact(10) << '\n';
  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';

  double root1, root2;  // these will contain the answers after calling

  cout << "roots=" << root1 << ", " << root2 << '\n';

  double x = 3, y = 4;
  double r, theta;

  // array problems
  int arr[] = {1, 4, 3, 2};
  cout << "arr avg=" << mean(arr, 4) << '\n';  // should be 2.5
  cout << "arr max=" << max(arr, 4) << '\n';   // should be 4

  // should be 24
  cout << "arr sum=" << sum(arr, 4) << '\n';  // should be 10

  int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
  cout << "arr avg=" << mean(arr2, 8) << '\n';
  cout << "arr max=" << max(arr2, 8) << '\n';

  cout << "arr sum=" << sum(arr2, 8) << '\n';

  double arr3[6] = {1, 2, 3, 4, 5, 6};
  demean(arr3, sizeof(arr3) / sizeof(double));
  print(arr3, 6);

  double arr4[6] = {1, 2, 3, 4, 5, 6};

  double arr5[] = {1.5, 3, 9, 4, 16, 8.2, 5.9, 15.2};

  int arr6[] = {6, 1, 9, 2, 5, 3, 7};

  double arr7[] = {2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
  round(arr7, sizeof(arr7) / sizeof(double));
  print(arr7, sizeof(arr7) / sizeof(double));

  cout << "countevens=" << countEvens(arr6, 7) << '\n';
  addToEach(arr6, 7, 3);
  print(arr6, sizeof(arr6) / sizeof(double));

  double arr8[] = {1.0, 2.5, 3.0, 3.5};

  int r1[] = {1, 2, 3, 4, 5, 6, 7};

  int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};

  char s1[] = "this is a test";

  char s2[] = "testing testing 123";

  char s3[] = "a toyota. able was i ere i saw elba";
}
