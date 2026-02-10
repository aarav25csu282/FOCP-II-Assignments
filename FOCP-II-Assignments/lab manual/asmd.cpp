#include <iostream>
using namespace std;

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float divi(int x, int y);

int main() {
    int a = 0;
    int b = 0;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "add: " << add(a, b) << endl;
    cout << "sub: " << sub(a, b) << endl;
    cout << "mult: " << mult(a, b) << endl;

    if (b != 0)
        cout << "divi: " << divi(a, b) << endl;
    else
        cout << "Divi zero error" << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

float divi(int x, int y) {
    return (float)x / y;
}
