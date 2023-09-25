#pragma once

// Problem #1
int max(int a, int b);
int min(int a, int b);

// Problem #2
int max(int arr[], int n);
int min(int arr[], int n);

// Problem #3
float square(float x);
void square(float arrOut[], const float  arrIn[], float  n);

// Problem #4
float convertToCelsius(float fahrenheit);

double calculateUniversalForce(double m1,
	                           double m2,
	                           double r,
	                           double G=6.674E-11);

float calculateEuclideanDistance(float x1, float y1, float x2, float y2);

// Problem #5
struct Complex {
	double real;  // Real part
	double imag;  // Imaginary part
};

Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mul(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);


// Problem #6
enum EqSolType
{
	EQST_TWO_REAL, // Two real roots
	EQST_ONE_REAL, // One real roots
	EQST_TWO_IMAG  // Two imaginary roots
};

struct QuadEqSol
{
	EqSolType type; // Solution type
	Complex root1;  // Root #1
	Complex root2;  // Root #2
};

QuadEqSol solveQuadEq(double a, double b, double c);
