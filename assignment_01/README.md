
# Assignment #01


- In this assignment, we aim to write a simple math library.

- All declarations such as function prototypes, structures, etc should be written in **"mathlib.h"** header file, and function definitions (i.e., function bodies) should be written in **"mathlib.cpp"** source file.

- In the evaluation system, the file names, "mathlib.h" and "mathlib.cpp", are used, thus your submission will <span style="color:red">**NOT**</span> be recognized by the system <span style="color:red">**if you change the file names**</span>.

- Submit the two files, "mathlib.h" and "mathlib.cpp", to the codePost system. <span style="color:red">**DO NOT**</span> include a file that contains **main** function.

- You **CANNOT** use the C++ standard library unless the headers are explicitly specified. You can include "cmath" header in "mathlib.cpp" to use <code>sqrt</code>, <code>pow</code>, and <code>fabs</code>.

- Collaborate with your colleagues to write and share test cases in main function. <span style="color:red">However, any plagiarism is not allowed.</span> Plagiarism will be checked by automatic methods in the system.

- Your files and codes might look like:


    ```C++
    // mathlib.h
    #pragma once

    int max(int a, int b);
    int min(int a, int b);

    // omitted...
    ```

    ```C++
    // mathlib.cpp
    #include "mathlib.h"

    int max(int a, int b)
    {
        // Implement the function...
    }

    int min(int a, int b)
    {
        // Implement the function...
    }
    // omitted...
    ```

    ```C++
    // DO NOT submit a source file that includes main() function.
    // Use main() function only for your tests.

    #include "mathlib.h"

    int main()
    {
        // Write some test cases for verifying your codes...

        return 0;
    }
    ```



## Problem (1)

Write functions for getting the minimum and maximum values between two <code>int</code> values.
	
#### (a) Write <code>max</code> function. [5pt]
```C++
int max(int a, int b);
```
    
#### (b) Write <code>min</code> function. [5pt]
```C++
int min(int a, int b);
```

## Problem (2)

Write functions for getting the minimum and maximum values from an int array. The <code>arr</code> parameter accepts an <code>int</code> array, and <code>n</code> parameter accepts the number of elements in the <code>int</code> array.

#### (a) Write <code>max</code> function. [5pt]

```C++
int max(int arr[], int n);
```

#### (b) Write <code>min</code> function. [5pt]

```C++
int min(int arr[], int n);
```

## Problem (3)

Write two square functions for a single <code>float</code> and an <code>float</code> array, respectively. These functions calculate the square of a real number.

#### (a) Write <code>square</code> function for a single <code>float</code> value. [5pt]

```C++
float square(float x);
```

#### (b) Write <code>square</code> function for <code>float</code> arrays. [5pt] 
The <code>arrOut</code> and <code>arrIn</code> parameters accept <code>float</code> arrays, and <code>n</code> parameter accepts the number of elements in the arrays. We assume that the two arrays have the same number of elements. The squared numbers should be assigned to the output array, <code>arrOut</code>.

```C++
void square(float arrOut[], const float  arrIn[], int  n);
```

A usage example is like this:
	 
```C++
const int n = 5;
float arr[] = { 1.f, 2.f, 3.f, 4.f, 5.f };
float arrSquared[n];

square(arrSquared, arr, n);

// arrSquared[i] should be equal to square(arr[i]).
```

## Problem (4)

Write functions for mathematical expressions.

#### (a) Write <code>convertToCelsius</code> to convert Fahrenheit temperature to Celsius temperature. [5pt]

$$
T_{Celsius} = (T_{Fahrenheit} - 32) × 5 / 9
$$

Note that <code>5/9</code> and <code>5.0f/9.0f</code> are different in C++.

```C++
float convertToCelsius(float fahrenheit);
```

#### (b) Write <code>calculateUniversalForce</code> function, based on Newton's law of universal gravitation. [5pt]

```C++
double calculateUniversalForce(double m1,
                               double m2,
                               double r,
                               double G=6.674E-11);
```
The units of <code>m1</code>, <code>m2</code>, <code>r</code>, and <code>G</code> are $kg$, $kg$, $m$, and, $N \cdot m^2/kg^2$, respectively. 
Note that the parameter <code>G</code> has a default value.

$$
F = \frac{G (m_1 \cdot m_2)}{r^2}
$$



#### (c) Write <code>calculateEuclideanDistance</code> function, based on "Euclidean distance". [5pt]

The two points in two-dimensional space is given as $p_1=(x_1, y_1)$ and $p_2=(x_2, y_2)$. 
$$
ED = \sqrt{(x_1-x_2 )^2+(y_1-y_2 )^2 }
$$

```C++
float calculateEuclideanDistance(float x1, float y1, float x2, float y2);
```

## Problem (5)

Write a structure and functions for complex numbers.

#### (a) Define <code>Complex</code> structure in "mathlib.h" as follows.

```C++
struct Complex
{
    double real;  // Real part
    double imag;  // Imaginary part
};
``` 

#### (b) Write <code>complex_add</code> function for <code>Complex</code> structure. [6pt]
First, you need to search the definition of complex number operations.
It is assumed that <code>c2</code> is not 0. 

```C++
Complex complex_add(Complex c1, Complex c2);  // c3 = c1 + c2
```

#### (c) Write <code>complex_sub</code> function for <code>Complex</code> structure. [6pt]
```C++
Complex complex_sub(Complex c1, Complex c2);  // c3 = c1 − c2 
```
#### (c) Write <code>complex_mul</code> function for <code>Complex</code> structure. [6pt]
```C++
Complex complex_mul(Complex c1, Complex c2);  // c3 = c1 ∙ c2
```
#### (d) Write <code>complex_div</code> function for <code>Complex</code> structure. [7pt] 

```
Complex complex_div(Complex c1, Complex c2);   // c3 = c1 / c2
```

## Problem (6)

Write an enumeration, a structure and a function for solving quadratic equations. The <code>Complex</code> structure is the same as that of **Problem (5)**. The quadratic equation is defined as follows. It is assumed that the coefficient of quadratic term, <code>a</code>, is not 0.

$$
ax^2+bx+c=0.
$$

The solution can have one of the three different types. We can use the discriminant $D$ to determine the type of solution.

$$
\begin{align}
	D &= b^2 - 4ac>0 : \quad \text{Two real roots} \nonumber \\
	D &= b^2 - 4ac=0 : \quad \text{One real root} \nonumber \\
	D &= b^2 - 4ac<0 : \quad \text{Two imaginary roots} \nonumber
\end{align}
$$
	
#### (a) Write <code>EqSolType</code> enumeration that defines three different types as follows.
 
```C++
enum EqSolType
{
    EQST_TWO_REAL, // Two real roots
    EQST_ONE_REAL, // One real roots
    EQST_TWO_IMAG  // Two imaginary roots
};
```

#### (b) Write <code>QuadEqSol</code> structure that has two complex structure as its members.
 ```C++
 struct QuadEqSol
{
    EqSolType type;  // Solution type
    Complex root1;   // Root #1
    Complex root2;   // Root #2
};
 ```


#### (c) Write solveQuadEq function that returns <code>QuadEqSol</code> structure. [30pt]
The returned <code>QuadEqSol</code> structure should have appropriate values according to the root types. In the case of one real root, <code>root1</code> and <code>root2</code> of a <code>QuadEqSol</code> instance should have the same values. 

```C++
QuadEqSol solveQuadEq(double a, double b, double c);
```
