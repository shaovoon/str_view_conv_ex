# C++17 string_view to integer/float example

**Note:** using `boost::spirit::qi` to do the job. (Spirit v2)

**Note:** using `string_ref` from Boost until `string_view` is available in the Standard.

**Note:** `str_to_value()` works with std::string and null terminated array as well.

```cpp
// str_to_value.h

#pragma once

#include <boost/spirit/include/qi.hpp>

template<typename string_type>
inline bool str_to_value(const string_type& src, double& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::double_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, float& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::float_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, long long& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::long_long, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, unsigned long long& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::ulong_long, dest);
}


template<typename string_type>
inline bool str_to_value(const string_type& src, long& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::long_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, unsigned long& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::ulong_, dest);
}


template<typename string_type>
inline bool str_to_value(const string_type& src, int& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::int_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, unsigned int& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::uint_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, short& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::short_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, unsigned short& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::ushort_, dest);
}
```

```cpp
#include <iostream>
#include <boost/utility/string_ref.hpp> 
#include "str_to_value.h"

int main()
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

	return 0;
}
```

**Related Boost Spirit Qi Benchmarks**
* [String to Integer Benchmark](https://github.com/shaovoon/intbench)
* [String to Float Benchmark](https://github.com/shaovoon/floatbench)
