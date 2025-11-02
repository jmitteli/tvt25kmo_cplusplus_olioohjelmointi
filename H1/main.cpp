#include <functions.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    int b;
    int userSelection;

    cout << "Welcome to exercise H1!" << endl;

    cout << "Give first number!" << endl;
    cin >> a;
    cout << "Give second number!" << endl;
    cin >> b;
    cout << "You gave numbers a=" << a << " and b=" << b << endl;
    cout << "Please select function!" << endl;
    cout << "1. calcSum, prints sum of "<< a << " + "<< b << " and prints result" << endl;
    cout << "2. calcDiv, calculates "<< a << " / "<< b <<" and prints result" << endl;
    cout << "3. retSum, calculates "<< a << " + "<< b <<" and main prints result"<<  endl;
    cout << "4. retDiv, calculates "<< a << " / "<< b <<" and main prints result" << endl;

    cin >> userSelection; // User selects the function to use

    switch (userSelection) {
    case 1:
        calcSum(a, b);
        break;
    case 2:
        calcDiv(a, b);
        break;
    case 3:
        cout<< a << " + " << b << " = "<<retSum(a, b)<<endl;
        break;
    case 4:
        try {
            float result = retDiv(a, b);
            cout << fixed << setprecision(2);
            cout << a << " / " << b << " = " << result << endl;
        } catch (runtime_error &e) {
            cout << "Error: " << e.what() << endl;
        }
        break;
    default:
        calcSum(a, b);
    }
    return 0;
}
