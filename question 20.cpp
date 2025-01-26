#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration of UDF3_Sum
double UDF3_Sum(double sqrt_a, double sqrt_b, double sqrt_c);

// Function to calculate the square root of a number
double UDF2_Squareroot(double num) {
    return sqrt(num);
}

// Function to calculate the sum of squares
double UDF1_Sum_of_square(double a, double b, double c) {
    // Sending a, b, and c to UDF2 to calculate their square roots
    double sqrt_a = UDF2_Squareroot(a);
    double sqrt_b = UDF2_Squareroot(b);
    double sqrt_c = UDF2_Squareroot(c);

    // Sending the square root values to UDF3 to compute the sum of their squares
    return UDF3_Sum(sqrt_a, sqrt_b, sqrt_c);
}

// Function to compute the sum of the squares of square roots and return the product
double UDF3_Sum(double sqrt_a, double sqrt_b, double sqrt_c) {
    // Sum of the squares of square roots
    double sum_of_squares = (sqrt_a * sqrt_a) + (sqrt_b * sqrt_b) + (sqrt_c * sqrt_c);

    // Returning the product of the square roots
    return sqrt_a * sqrt_b * sqrt_c;
}

int main() {
    double a, b, c;

    // Taking input values for a, b, and c
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    // Calling UDF-1 to process the input values and pass them through UDF-2 and UDF-3
    double product_of_sqrts = UDF1_Sum_of_square(a, b, c);

    // Output the result (product of the square roots)
    cout << "The product of the square roots is: " << product_of_sqrts << endl;

    return 0;
}

