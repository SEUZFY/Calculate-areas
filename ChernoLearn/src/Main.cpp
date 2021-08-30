#include<iostream>
#include "Triangle.h"

int main()
{
	double sum_area = 0;
	Triangle a1(3, 4, 6);
	Triangle a2(5, 6, 7);

	sum_area = a1.cal_area() + a2.cal_area();
	std::cout << "area: " << sum_area << std::endl;

	return 0;
}
