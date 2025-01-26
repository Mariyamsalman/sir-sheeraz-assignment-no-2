#include <iostream>
using namespace std;

// 1. Solve (First): Draws the table of the integer value
void Solve(int num) {
    cout << "Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// 2. Solve (Second): Computes the sum of squares of three float values
void Solve(float a, float b, float c) {
    float sum_of_squares = (a * a) + (b * b) + (c * c);
    cout << "Sum of squares of " << a << ", " << b << ", " << c << " is: " << sum_of_squares << endl;
}

// 3. Solve (Third): Computes the average of four integer values
float Solve(int a, int b, int c, int d) {
    return (a + b + c + d) / 4.0;
}

// 4. Function Template: Computes the sum of squares for both integer and float values
template <typename T>
void Solve(T a, T b, T c) {
    T sum_of_squares = (a * a) + (b * b) + (c * c);
    cout << "Sum of squares of " << a << ", " << b << ", " << c << " is: " << sum_of_squares << endl;
}

int main() {
    // 1. Solve (First)
    Solve(5);

    // 2. Solve (Second)
    Solve(1.5f, 2.5f, 3.5f);

    // 3. Solve (Third)
    float avg = Solve(10, 20, 30, 40);
    cout << "The average of 10, 20, 30, 40 is: " << avg << endl;

    // 4. Function Template
    Solve(2, 3, 4);    // Using the template for integers
    Solve(1.1f, 2.2f, 3.3f); // Using the template for floats

    return 0;
}

