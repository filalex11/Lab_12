#ifndef LAB_12_CPP
#define LAB_12_CPP
#include "functions.h"
#include <stdio.h>
fVector :: fVector (int s) { // constructor
	if (s > 100) {
		printf ("ERROR! TOO BIG SIZE!");
		return;
	}
	size = s;
	vector = new float[size];
}

fVector :: fVector (void) { // default constructor
	size = 1;
	vector = new float[size]; 
}

void fVector :: get (void) {
	int i = 0;
	printf ("Components of the vector:\n");
	for (; i < size; ++i) {
		printf ("%f ", vector[i]);
	}
	printf ("\n");
}

void fVector :: set (void) {
	int i = 0;
	printf ("Enter the components of vector:\n");
	for (; i < size; ++i) {
		scanf ("%f", &vector[i]);
	}
}

fVector :: ~fVector (void) { // destructor
	delete [] vector;
}

fVector :: fVector (fVector &v) { // copy constructor
	size = v.size;
	vector = new float[size];
	int i = 0;
	for (i = 0; i < size; ++i) {
		vector[i] = v.vector[i];
	}
}

fVector& fVector :: operator = (fVector &v) { // copy assignment
	if (&v == this) {
		return *this;
	}
	delete [] vector;
	size = v.size;
	vector = new float[size];
	int i = 0;
	for (i = 0; i < size; ++i) {
		vector[i] = v.vector[i];
	}
	return *this;
}

fVector& fVector :: operator + (fVector &v) {
	int i = 0;
	this->size > v.size ? v.size = this->size : this->size = v.size;
	for (i = 0; i < v.size; ++i) {
		vector[i] += v.vector[i];
	}
	return *this;
}

fVector& fVector :: operator - (fVector &v) {
	int i = 0;
	this->size > v.size ? v.size = this->size : this->size = v.size;
	for (i = 0; i < v.size; ++i) {
		vector[i] -= v.vector[i];
	}
	return *this;
}

fVector& fVector :: operator * (float number) {
	int i = 0;
	for (i = 0; i < this->size; ++i) {
		vector[i] *= number;
	}
	return *this;
}

float fVector :: operator ^ (fVector &v) {
	float res = 0;
	int i = 0;
	this->size < v.size ? v.size = this->size : this->size = v.size;
	for (i = 0; i < v.size; ++i) {
		res += vector[i] * v.vector[i];
	}
	return res;
}
#endif
