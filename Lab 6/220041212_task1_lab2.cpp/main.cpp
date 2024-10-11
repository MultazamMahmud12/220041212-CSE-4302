#include <iostream>
#include "Matrix3D.h"
using namespace std;

int main() {
    Matrix3D m1;
    m1.setIncrement(2);
    cout << m1.getx() << endl;
    m1.increment();
    m1.increment();
    m1.getMatrix();

    return 0;
}
