#include <iostream>
using namespace std;
int main () {
// Problem1
    // A
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // B
    // int N;
    // cout << "Enter a number: ";
    // cin >> N;
    // for (int i = 1; i <= N; i++) {
    //     cout << i << " ";
    // } cout << endl;

    // Problem2
    // A
    // for (int i = 1; i <= 10; i += 2) {
    //     cout << i << " ";
    // } cout << endl;

// B
    // for (int i = 2; i <= 10; i += 2) {
    //     cout << i << " ";
    // } cout << endl;

// Problem3
    // int count = 0;
    //
    // for (char ch = 'A'; ch <= 'Z'; ch++) {
    //     cout << ch << " ";
    //     count++;
    //
    //     // Print a newline after every 5 characters
    //     if (count % 5 == 0) {
    //         cout << endl;
    //     }
    // }
    //
    // // Ensure the last line ends properly
    // cout << endl;

// Problem4
    // int num, factorial = 1;
    //
    // cout << "Enter a positive integer: ";
    // cin >> num;
    //
    // if (num < 0) {
    //     cout << "Factorial is not defined for negative numbers." << endl;
    // } else {
    //     for (int i = 1; i <= num; i++) {
    //         factorial *= i;
    //     }
    //     cout << "Factorial of " << num << " is: " << factorial << endl;
    // }

// Problem5
    // int numSubjects;
    // cout << "Enter the number of subjects: ";
    // cin >> numSubjects;
    //
    // int totalCredits = 0;
    // double totalGPA = 0;
    //
    // for (int i = 1; i <= numSubjects; i++) {
    //     int credits, marks;
    //     cout << "Enter credits for subject " << i << ": ";
    //     cin >> credits;
    //     cout << "Enter marks for subject " << i << ": ";
    //     cin >> marks;
    //
    //     double gpa;
    //     if (marks >= 90) gpa = 4.0;
    //     else if (marks >= 80) gpa = 3.5;
    //     else if (marks >= 70) gpa = 3.0;
    //     else if (marks >= 60) gpa = 2.5;
    //     else if (marks >= 50) gpa = 2.0;
    //     else if (marks >= 40) gpa = 1.5;
    //     else gpa = 0.0;
    //
    //     totalGPA += gpa * credits;
    //     totalCredits += credits;
    // }
    //
    // cout << "Total GPA: " << (totalCredits > 0 ? totalGPA / totalCredits : 0) << endl;

// Problem7
    // int size;
    // cout << "Enter the size of the square: ";
    // cin >> size;
    //
    // for (int i = 0; i < size; i++) {
    //     for (int j = 0; j < size; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Problem8
    // int height;
    // cout << "Enter the height of the triangle: ";
    // cin >> height;
    //
    // for (int i = 1; i <= height; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



    // Problem9
    // int num;
    // bool isPrime = true;
    //
    // cout << "Enter a number: ";
    // cin >> num;
    //
    // if (num < 2) {
    //     isPrime = false;
    // } else {
    //     for (int i = 2; i * i <= num; i++) {  // Optimized check up to sqrt(num)
    //         if (num % i == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    // }
    //
    // if (isPrime)
    //     cout << num << " is a prime number." << endl;
    // else
    //     cout << num << " is not a prime number." << endl;

// Problem10
    // int n, sum = 0;
    //
    // cout << "Enter the value of n: ";
    // cin >> n;
    //
    // for (int i = 1; i <= n; i++) {
    //     sum += (i * i);
    // }
    //
    // cout << "Sum of the series: " << sum << endl;


    // Problem11
    // int num, countPositive = 0, countNegative = 0, countTotal = 0;
    // double sum = 0;
    //
    // cout << "Enter integers (0 to stop): " << endl;
    //
    // while (true) {
    //     cin >> num;
    //     if (num == 0) break;  // Stop when 0 is entered
    //
    //     if (num > 0)
    //         countPositive++;
    //     else
    //         countNegative++;
    //
    //     sum += num;
    //     countTotal++;
    // }
    //
    // if (countTotal == 0)
    //     cout << "No numbers were entered." << endl;
    // else {
    //     double average = sum / countTotal;
    //     cout << "Number of positives: " << countPositive << endl;
    //     cout << "Number of negatives: " << countNegative << endl;
    //     cout << "Total sum: " << sum << endl;
    //     cout << "Average: " << average << endl;
    // }


// Problem12
    // int n, digit;
    // cout << "Enter a number: ";
    // cin >> n;
    //
    // cout << "Digits in reverse order: ";
    // while (n > 0) {
    //     digit = n % 10;  // Extract the last digit
    //     cout << digit;
    //     n /= 10;  // Remove the last digit
    // }
    // cout << endl;


// Problem13
    // int height;
    // cout << "Enter the height of the triangle: ";
    // cin >> height;
    //
    // if (height == 0) {
    //     cout << "Depth is 0" << endl;
    // } else {
    //     for (int i = 1; i <= height; i++) {
    //         for (int j = 1; j <= i; j++) {
    //             cout << j << " ";
    //         }
    //         cout << endl;
    //     }
    // }

// Problem14
    // int binary, decimal = 0, power = 0;
    //
    // cout << "Enter a binary number: ";
    // cin >> binary;
    //
    // while (binary > 0) {
    //     int lastDigit = binary % 10;  // Extract last digit
    //     decimal += lastDigit * pow(2, power);  // Convert to decimal
    //     binary /= 10;  // Remove last digit
    //     power++;
    // }
    //
    // cout << "Decimal equivalent: " << decimal << endl;
    //

    return 0;
}