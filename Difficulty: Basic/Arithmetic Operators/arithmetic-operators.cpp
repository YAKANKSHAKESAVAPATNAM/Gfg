#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int p = x + y;   // Addition
    int q = x - y;   // Subtraction
    int r = x * y;   // Multiplication
    int s = x / y;   // Division (integer division)
    int t = x % y;   // Modulo

    cout << p << " " << q << " " << r << " " << s << " " << t << endl;

    return 0;
}