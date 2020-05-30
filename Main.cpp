#include <iostream>
#include "Matrix2D.h"
#include "Matrix3D.h"

using namespace std;

int main()
{
    unsigned int size2D = 2;
    unsigned int size3D = 3;
    Matrix2D m2a(size2D), m2b(size2D);
    Matrix3D m3a(size3D), m3b(size3D);
    cout << "1st 2d matrix: " << endl << m2a << endl;
    cout << "2nd 2d matrix: " << endl << m2b << endl;
    m2a += m2b;
    cout << "summ of 2d matrixs: " << endl << m2a;
    m2a *= 9;
    cout << "matrix multiplication by 9: " << endl << m2a;
    cout << endl << endl;
    cout << "1st 3d matrix: " << endl << m3a << endl;
    cout << "2nd 3d matrix: " << endl << m3b << endl;
	m3a += m3b;
    cout << "summ of 3d matrixs: " << endl << m3a;
    m3a *= 5;
	cout << endl;
    cout << "matrix multiplication by 5: " << endl << m3a;
}

