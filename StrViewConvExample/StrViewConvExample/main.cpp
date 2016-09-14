#include <string>
#include <iostream>
#include <boost/utility/string_ref.hpp> 
#include "str_to_value.h"

int main(int argc, char *argv [])
{
	boost::string_ref srn("123");
	int n = 0;
	if (str_to_value(srn, n))
	{
		std::cout << n << std::endl; // display 123
	}

	boost::string_ref srd("123.456");
	double d = 0.0;
	if (str_to_value(srd, d))
	{
		std::cout << d << std::endl; // display 123.456
	}

	std::string sd("123.456");
	d = 0.0;
	if (str_to_value(sd, d))
	{
		std::cout << d << std::endl; // display 123.456
	}

	const char arr[] = "123.456";
	d = 0.0;
	if (str_to_value(arr, d))
	{
		std::cout << d << std::endl; // display 123.456
	}

	return 0;
}

