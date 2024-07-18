#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a>>b;
    cout.precision(3);
    cout << (a+b)/(a-b);
    return 0;
}