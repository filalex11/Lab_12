#ifndef FUNCTIONS_H
#define FUNCTIONS_H
class fVector {
	float *vector;
	int size;
public:
	fVector (int size);
	fVector (void);
	void get (void);
	void set (void);
	~fVector (void);
	fVector (fVector &v);
	fVector& operator = (fVector &v);
	fVector& operator + (fVector &v);
	fVector& operator - (fVector &v);
	fVector& operator * (float number);
	float operator ^ (fVector &v);
};
#endif
