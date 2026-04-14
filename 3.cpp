#include <iostream>
using namespace std;

class ComplexNumber {
private:
    float real, imag;
public:
    ComplexNumber(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    ComplexNumber operator+(ComplexNumber c) {
        return ComplexNumber(real + c.real, imag + c.imag);
    }

    ComplexNumber operator-(ComplexNumber c) {
        return ComplexNumber(real - c.real, imag - c.imag);
    }

    ComplexNumber operator*(ComplexNumber c) {
        return ComplexNumber((real * c.real - imag * c.imag),
                             (real * c.imag + imag * c.real));
    }

    bool operator==(ComplexNumber c) {
        return (real == c.real && imag == c.imag);
    }

    void display() {
        if(imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

int main() {
    ComplexNumber c1(3, 4), c2(1, 2);
    ComplexNumber c3 = c1 + c2;
    c3.display();
    cout << endl;

    ComplexNumber c4(8, 3), c5(5, 6);
    ComplexNumber c6 = c4 - c5;
    c6.display();
    cout << endl;

    ComplexNumber c7(2, 3), c8(1, 4);
    ComplexNumber c9 = c7 * c8;
    c9.display();
    cout << endl;

    ComplexNumber c10(3, 5), c11(3, 5);
    if(c10 == c11)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
