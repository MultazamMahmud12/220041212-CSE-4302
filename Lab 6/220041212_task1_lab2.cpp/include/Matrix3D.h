#ifndef MATRIX3D_H
#define MATRIX3D_H

#include <iostream>
using namespace std;

class Matrix3D {
public:
    Matrix3D();
    Matrix3D(int value);
    double det();
    Matrix3D inverse();
    void setIncrement(int value);
    int getMatrix();
    void increment();
    double operator + ( Matrix3D sum);
    double operator - ( Matrix3D diff);
    double operator * ( Matrix3D mul);
    bool operator<( Matrix3D);
    bool operator>( Matrix3D);
    bool operator>=( Matrix3D);
    bool operator<=( Matrix3D);
    bool operator!=( Matrix3D);
    bool operator==( Matrix3D);
    void operator = ( Matrix3D assign);
    int getx();
    int gety();
    int getz();

private:
    int increase;
    int count;
    int x, y, z;
    double dete;
};

#endif
