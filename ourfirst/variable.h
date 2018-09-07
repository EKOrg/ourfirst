#pragma once
#include <string>

using namespace std;
class variable
{
private:
	double m_poteny;
	double m_koefiyient;
public:
	variable();

	variable& operator =(string rop);
};

