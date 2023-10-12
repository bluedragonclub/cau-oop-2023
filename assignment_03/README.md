
# Assignment #03


- In this assignment, we aim to rewrite the `Vector3d` structure as a C++ class.

- The submission deadline is <span style="color:red">**October 19, 2023 at 23:59**</span>. 

- All declarations such as function prototypes, structures, classes, etc should be written in **"Vector3d.h"** header file, and function definitions (i.e., function bodies) should be written in **"Vector3d.cpp"** source file. Note that the first characters of the file names are capitalized.

- In the evaluation system, the file names, "Vector3d.h" and "Vector3d.cpp", are used, thus your submission will <span style="color:red">**NOT**</span> be recognized by the system <span style="color:red">**if you change the file names**</span>.
    
- Submit the two files, "Vector3d.h" and "Vector3d.cpp", to the codePost system. <span style="color:red">**DO NOT**</span> include a file that contains **main** function.

- You **CANNOT** use the C++ standard library unless the headers are explicitly specified. You can include `<cmath>` header in "Vector3d.cpp" to use `sqrt`, `pow`, `fabs`, `acos`, and etc.

- Collaborate with your colleagues to write and share test cases in `main` function. <span style="color:red">**However, any plagiarism is not allowed.**</span> Plagiarism will be checked by automatic methods in the system.

- Write a class for vectors in 3-dimensional space. This class is almost the same as the `Vector3d` structure in the [Assignment#02](https://github.com/bluedragonclub/cau-oop-2023/tree/main/assignment_02).

- Your files and codes might look like:

    ```C++
    // Vector3d.h
    #pragma once

    class Vector3d
    {
    private:
        double mX;
        double mY;
        double mZ;

    public:
        Vector3d();
        Vector3d(double x, double y, double z);

        double GetX() const;
        double GetY() const;
        double GetZ() const;

        void SetX(double x);
        void SetY(double y);
        void SetZ(double z);

        Vector3d Add(double c) const;
        Vector3d Add(const Vector3d& v) const;
        Vector3d Sub(double c) const;
        Vector3d Sub(const Vector3d& v) const;
        Vector3d Mul(double c) const;
        Vector3d Mul(const Vector3d& v) const;
        Vector3d Div(double c) const;
        Vector3d Div(const Vector3d& v) const;

        double Sum() const;
        double Length() const;
        double Distance(const Vector3d& v) const;
        double Inner(const Vector3d& v) const;
        Vector3d Cross(const Vector3d& v) const;
        double Angle(const Vector3d& v, bool radian = true) const;
    };

    ```

    ```C++
    // Vector3d.cpp    
    #include <cmath>
    #include <cfloat>

    #include "Vector3d.h"

    using namespace std;

    const double pi = std::acos(-1);

    Vector3d::Vector3d()
    {
        // Implement the constructor...	
    }

    // omitted...
    
    Vector3d Vector3d::Add(double c) const
    {
        // Implement the member function...	
    }

    Vector3d Vector3d::Add(const Vector3d& v2) const
    {
        // Implement the member function...	
    }

    Vector3d Vector3d::Sub(double c) const
    {
        // Implement the member function...	
    }
    
    // omitted...
    ```

    ```C++
    // DO NOT submit a source file that includes main() function.
    // Use main() function only for your tests.
    #include "Vector3d.h"

    int main()
    {
        // Write some test cases for verifying your codes...

        return 0;
    }
    ```



## Problem (1)

Write the constructors, getters, and setters of `Vector3d`. The default constructor should initialize all member variables to zero. [30pts]

```C++
Vector3d();
Vector3d(double x, double y, double z); 
double GetX() const;
double GetY() const;
double GetZ() const;
void SetX(double x);
void SetY(double y);
void SetZ(double z);
```


## Problem (2)

Write the following member functions of `Vector3d` class. All operations are element-wise operations. These functions should **NOT** change the elements of the callee object. These member functions should return a new `Vector3d` instance after their calculations. [40pts]

```C++
Vector3d Add(double c) const;
Vector3d Add(const Vector3d& v2) const;
Vector3d Sub(double c) const;
Vector3d Sub(const Vector3d& v2) const;
Vector3d Mul(double c) const;
Vector3d Mul(const Vector3d& v2) const;
Vector3d Div(double c) const;
Vector3d Div(const Vector3d& v2) const;
```

The following example shows how `vector3d_add` function in [Assignment#02](https://github.com/bluedragonclub/cau-oop-2023/tree/main/assignment_02) corresponds to `Vector3d::Add` member function.

```C++
// The members of v1 and v2 should NOT be changed.
auto v3 = v1.Add(c);   // auto v3 = vector3d_add(v1, c);
auto v3 = v1.Add(v2);  // auto v3 = vector3d_add(v1, v2);
```

## Problem (3)

Write the `sum` member function of `Vector3d` class for the summation of all elements in `Vector3d`. [5pts]

```C++
double Sum() const;
```

$$
v = (1.0, 2.0, 3.0) \rightarrow Sum(v) = 1.0 + 2.0 + 3.0 = 6.0
$$



## Problem (4) 

Write the following member functions of `Vector3d` class. You can refer to the [Assignment#02](https://github.com/bluedragonclub/cau-oop-2023/tree/main/assignment_02) for more details. [25pts]

 
```C++
double Length() const;
double Distance(const Vector3d& v2) const;
double Inner(const Vector3d& v2) const;
Vector3d Cross(const Vector3d& v2) const;
double Angle(const Vector3d& v2, bool radian = true) const;
```
