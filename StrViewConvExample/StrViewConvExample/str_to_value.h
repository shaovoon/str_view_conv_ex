// str_to_value.h
// C++ String to Integral Types
// Author: Wong Shao Voon
// Copyright 2016
// No warranty implied or expressed.

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
