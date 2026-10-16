#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Enter A and B: ";
    cin >> A >> B;

    if (A != B) {
        int maxValue = (A > B) ? A : B;
        A = maxValue;
        B = maxValue;
    } else {
        A = 0;
        B = 0;
    }

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}