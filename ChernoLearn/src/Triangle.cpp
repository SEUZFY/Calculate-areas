#include<math.h>
#include "Triangle.h"

double& Triangle::cal_area()
{
	double s = (m_a + m_b + m_c) / 2;
	m_area = sqrt(s * (s - m_a) * (s - m_b) * (s - m_c));
	return m_area;
}