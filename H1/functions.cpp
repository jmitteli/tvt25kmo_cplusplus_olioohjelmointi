#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////

// Function that calculates sum of two numbers
void calcSum(int a, int b) {
    int Sum = a + b;
    cout << a << " + " << b << " = " << Sum << endl;
}

////////////////////////////////////////////////////////////////////////////////////////

// Function that divides number a with number b
void calcDiv(int a, int b) {
    try {
        if (b == 0) { // If divider is zero throw error
            throw runtime_error("Division by zero!!!!");
        }
        // If the divider is not zero do the calculation
        int result = a / b;
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error &e) {

        cout << "Error: " << e.what() << endl; // Displays the thrown error code
    }
}

///////////////////////////////////////////////////////////////////////////////////////////

// Calculates sum of two numbers
int retSum(int a, int b) {
    int Sum = a + b;
    return Sum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Divides a with number b
float retDiv(int a, int b) {
    if (b == 0) { // If divider is zero throw error
        throw runtime_error("Division by zero!!!!");
    }
    float result = (float)a / (float)b;
    return result;
}

////////////////////////////////////////////////////////////////////////////////////////
