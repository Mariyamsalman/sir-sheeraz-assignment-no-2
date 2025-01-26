#include <iostream>
using namespace std;

// Function to print the multiplication table of each number
void table(int numbers[]) {
    for (int i = 0; i < 5; i++) {
        cout << "\nTable of " << numbers[i] << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << numbers[i] << " x " << j << " = " << numbers[i] * j << endl;
        }
    }
}

int main() {
    int numbers[5];

    // Taking input from the user
    cout << "Enter 5 integers: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    // Calling the table function
    table(numbers);

    return 0;
}

