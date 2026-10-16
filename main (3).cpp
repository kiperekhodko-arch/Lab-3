#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;

    cout << "Enter A, B, C, D: ";
    cin >> A >> B >> C >> D;

    if (A != B && A != C && A != D) {
        cout << "Different number: 1" << endl;
    } else if (B != A && B != C && B != D) {
        cout << "Different number: 2" << endl;
    } else if (C != A && C != B && C != D) {
        cout << "Different number: 3" << endl;
    } else {
        cout << "Different number: 4" << endl;
    }

    return 0;
}