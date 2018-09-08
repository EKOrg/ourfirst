#include "variable.h"
#include <cstring>


variable::variable()
{
	m_koefiyient = 0;
	m_poteny = 0;
}

variable & variable::operator=(string rop)
{	

	std::string str = rop;
	char *cstr = new char[str.length() + 1];
	strcpy(cstr, str.c_str());
	// do stuff
	for (int i = 0; i < str.length() + 1; i++) {

	}

	delete[] cstr;
	
}



