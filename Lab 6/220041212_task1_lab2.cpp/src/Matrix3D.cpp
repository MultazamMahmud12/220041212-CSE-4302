#include "Matrix3D.h"

Matrix3D::Matrix3D() : increase(1), count(0), x(1), y(2), z(3) {
    count++;
    //cout << "Count : " << count << endl;
}

Matrix3D::Matrix3D(int value) : increase(value), x(1), y(2), z(3), count(0) {
    count++;
}

void Matrix3D::setIncrement(int value) {
    if (count != 0) {
        if (value >= 0) {
            increase = value;
        }
    } else {
        cout << "It cannot increment" << endl;
    }
}

int Matrix3D::getMatrix() {
    cout << "[" << getx() << " " << gety() << " " << getz() << "]" << endl;
    return 1;
}

double Matrix3D::det() {

    return x * y - z;
}

int Matrix3D::getx() { return x; }
int Matrix3D::gety() { return y; }
int Matrix3D::getz() { return z; }

double Matrix3D::operator+( Matrix3D sum) {
    x += sum.getx();
    y += sum.gety();
    z += sum.getz();
    return det();
}

double Matrix3D::operator-( Matrix3D diff) {
    x -= diff.getx();
    y -= diff.gety();
    z -= diff.getz();
    return det();
}

double Matrix3D::operator*( Matrix3D mul) {
    x *= mul.getx();
    y *= mul.gety();
    z *= mul.getz();
    return det();
}

void Matrix3D::operator=( Matrix3D assign) {
    x = assign.getx();
    y = assign.gety();
    z = assign.getz();
}

bool Matrix3D::operator<( Matrix3D d1) {
    return det() < d1.det();
}

bool Matrix3D::operator>( Matrix3D d1) {
    return det() > d1.det();
}

bool Matrix3D::operator>=( Matrix3D d1) {
    return det() >= d1.det();
}

bool Matrix3D::operator<=( Matrix3D d1) const {
    return det() <= d1.det();
}

bool Matrix3D::operator!=( Matrix3D d1) {
    return det() != d1.det();
}

bool Matrix3D::operator==( Matrix3D d1) {
    return det() == d1.det();
}

void Matrix3D::increment() {
    x += increase;
    y += increase;
    z += increase;
}
