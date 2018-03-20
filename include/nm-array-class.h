#ifndef IPN_ARRAY__CLASS_H

/*
	Author: reznikovkg
	GitHub: https://github.com/reznikovkg
	Email: kosrez1@yandex.ru

	File: include/nm-array-class.h
	GitHub Repository: https://github.com/reznikovkg/nm-array
*/

#define IPN_ARRAY__CLASS_H

#include <iostream>

using namespace std;

//class array for points on decard system [or other, not problem]
class nm_Array
{
private:

	double** nmA;
	int iA;
	int jA;

public:
	nm_Array() {}

	nm_Array(int ia, int ja) {
		iA = ia; jA = ja;
		nmA = new double*[iA];
		for (int i = 0; i < iA; i++) {
			nmA[i] = new double[jA];
		}
	}

	double getNMA(int ai, int aj) { return this->nmA[ai][aj]; }
	int getiA() { return this->iA; }
	int getjA() { return this->jA; }

	void setNMA(int ai, int aj, double ak) { nmA[ai][aj] = ak; }

	void printNMA() {
		for (int i = 0; i < iA; i++) {
			for (int j = 0; j < jA; j++) {
				cout << "[" << i << "][" << j << "] = " << nmA[i][j] << "    ";
			}
			cout << '\n';
		}
	}
	~nm_Array() {}
};

#endif IPN_ARRAY__CLASS_H
