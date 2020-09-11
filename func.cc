/*
	Lab1 Team Programming
	Author: Dov Kruger
	For a description of each function, see:
	https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
using namespace std;

int sum(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; i++)
        sum += i;
    return sum;
}

double mean(int[] arr, double len) {
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum/len;
}

int main() {
	cout << sum(1, 3) << ' ' << sum(1, 100) << '\n'; // should work no problem, right?
	cout << sum(1, 1000000) << '\n'; // what should this be? Don't assume it's right, check!

	cout << prod(2, 5) << '\n'; // 2*3*4*5 = 120
	cout << prod(3, 10) << '\n';
	cout << prod(3, 20) << '\n'; // just note whether you think these are right
	cout << prod(3, 30) << '\n'; // if it overflows, you don't have to fix it
	cout << prod(3, 100) << '\n';
	cout << sumsq(1, 5) << '\n';
	cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
	cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
	cout << "isPrime(1001)=" << isPrime(1001) << '\n';
	int a = 2, b = 3;
	swap(a, b);
	cout << "after swap a=" << a << " b=" << b << '\n';
	cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
	cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
	cout << "lcm(12, 18)=" << lcm(12, 18) << '\n';
	cout << "fact(10)=" << fact(10) << '\n';
	cout << "sum(1..100) = " << sum(100) << '\n';
	cout << "hypot(3,4)=" << hypot(3,4) << '\n';
	cout << "hypot(4,5)=" << hypot(4,5) << '\n';
	cout << "diffsq(3,4)=" << diffsq(3,4) << '\n';
	cout << "mean(1,4)=" << mean(1,4) << '\n';
	cout << "mean(1,4,5)=" << mean(1,4,5) << '\n';
	cout << "pythagoreantriple(3,4)=" << pythagoreantriple(3,4) << '\n';
	cout << "trig identity sin^2+cos^2 =" << trigIdentity(0.0);
	cout << "trig identity sin^2+cos^2 =" << trigIdentity(1.0); // for 1 radian
	double root1, root2; // these will contain the answers after calling
	quadraticEquation(1.0, 3.0, 2.0, root1, root2);
	cout << "roots=" << root1 << ", " << root2 << '\n';

	cout << "area of tri=" << area(0,0, 3,0, 3,3) << '\n';
	cout << "area of tri=" << area(0,0, -4,3, 3,5) << '\n';

	cout << "area of quad=" << area(0,0, 3,0, 4,3, -1,3);
	cout << "perimeter of tri=" << perimeter(0,0, 3,0, 3,3) << '\n';

	cout << "perimeter of quad=" << perimeter(0,0, 3,0, 3,4, 0,4) << '\n';

	cout << "dot product=" << dot(3.0, 2.0, 1.5,  2.0, 1.5, -3.0) << '\n';
	cout << "dot product=" << dot(2.0, 1.0, 1.0,  -3.0, 2.0, 4.0) << '\n';
	Vec3d v1(1.0, 2.0, 0.0), v2(1.0, 5.0, 0.0);
	cout << dot(v1, v2) << '\n';
	Vec3d c = cross(v1, v2);
	cout << c << '\n';

	double x = 3, y = 4;
	double r, theta;
	rect2polar(x, y, r, theta);
	cout << "r=" << r << " theta=" << theta << '\n';
	polar2rect(r, theta, x, y); // should get back the original values!
	cout << "x=" << x << " y=" << y << '\n';

	double earthMass=5.92e+24, moonMass = 7.348e23;
	Vec3d earthPos(0,0,0), moonPos(384400000, 0,0);
	double F = grav(earthMass, earthPos, moonMass, moonPos);
	cout << "Force between earth and moon=" << F << '\n';


  // array problems
	int arr[] = {1, 4, 3, 2};
	cout << "arr avg=" << mean(arr, 4) << '\n'; // should be 2.5
	cout << "arr max=" << max(arr, 4) << '\n'; // should be 4
	cout << "arr max=" << min(arr, 4) << '\n'; // should be 1
	cout << "arr prod=" << prod(arr, 4) << '\n'; // should be 24
	cout << "arr sum=" << sum(arr, 4) << '\n'; // should be 10

	int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
	cout << "arr avg=" << mean(arr2, 8) << '\n';
	cout << "arr max=" << max(arr2, 8) << '\n';
	cout << "arr max=" << min(arr2, 8) << '\n';
	cout << "arr prod=" << prod(arr2, 8) << '\n';
	cout << "arr sum=" << sum(arr2, 8) << '\n';

	cout << "arr compact=";
	vector<int> compact_result = compact(arr2, 8, 3, 8);
	for (int i=0; i < compact_result.size(); i++) {
	  cout << compact_result[i] << " ";
	}
	cout << '\n';

	double arr3[6] = {1, 2, 3, 4, 5, 6};
	demean(arr3, sizeof(arr3)/sizeof(double));
	print(arr3, 6);


	double arr4[6] = {1, 2, 3, 4, 5, 6};
	normalize(arr4, 6);
	print(arr4, 6);

	double arr5[] = { 1.5, 3, 9, 4, 16, 8.2, 5.9, 15.2};
	int size = strip(arr5, 8, 3.0, 8.5);
	print(arr5, size);

	int arr6[] = {6, 1, 9, 2, 5, 3, 7};
	for (int i = 0; i < 4; i++) {
		uint32_t pos = randomElement(arr6, 7);
		cout << arr6[pos] << ' ' ;
	}

	double arr7[] = { 2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
	round(arr7, sizeof(arr7)/sizeof(double));
	print(arr7, sizeof(arr7)/sizeof(double));

	cout << "countevens=" << countEvens(arr6, 7) << '\n';
	addToEach(arr6, 7, 3);
	print(arr6, sizeof(arr6)/sizeof(double));

	double arr8[] = {1.0, 2.5, 3.0, 3.5};
	square(arr8, sizeof(arr8)/sizeof(double));
	print(arr8, sizeof(arr8)/sizeof(double));
	squareRoot(arr8, sizeof(arr8)/sizeof(double));
	print(arr8, sizeof(arr8)/sizeof(double)); // should be back to orinal values

	int r1[] = {1, 2, 3, 4, 5, 6, 7};
	reverse(r1, 7);
	print(r1, 7);

	int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
	reverse(r2, 8);
	print(r2, 8);

	char s1[] = "this is a test";
	removeVowels(s1);
	cout << s1 << '\n';

	char s2[] = "testing testing 123";
	reverse(s2);
	cout << s2 << '\n';

	char s3[] = "a toyota. able was i ere i saw elba";
	reverse(s3);
	cout << s3 << '\n';

	cout << "isPalindrome(atoyota)=" << isPalindrome("atoyota") << '\n';
	cout << "isPalindrome(testing)=" << isPalindrome("testing") << '\n';
	cout << "checksum=" << checksum("ABC") << '\n'; // should be 65 + 66 + 67
	cout << "checksum=" << checksum("abcdefghijklmnopqrstuvwxyz") << '\n';

	cout << myhash("ABC") << '\n'; // (65 * 26 + 66) * 26 + 67
	cout << myhash("hash this!") << '\n';
	cout << myhash("hash a longer string") << '\n';

}
