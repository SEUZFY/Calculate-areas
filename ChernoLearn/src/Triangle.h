#pragma once
class Triangle
{
private:
	double m_a, m_b, m_c; //length
	double m_area; //area of triangle
public:
	Triangle(double a, double b, double c) { m_a = a; m_b = b; m_c = c; }
	double& cal_area();
	~Triangle() { }

};