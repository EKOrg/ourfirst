#pragma once
#include <string>

using namespace std;
class variable
{
private:
	double m_poteny;
	double m_koefiyient;
	char m_buchstabe;
public:
	variable();

	variable& operator =(string rop);
};

