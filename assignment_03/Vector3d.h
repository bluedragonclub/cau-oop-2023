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
