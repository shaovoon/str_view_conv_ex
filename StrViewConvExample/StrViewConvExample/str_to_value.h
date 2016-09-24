// str_to_value.h
// C++ String to Integral Types
// Author: Wong Shao Voon
// Copyright 2016
// No warranty implied or expressed.

// version 1.0.0  : 1st commit
// version 1.0.1  : Use fixed width integer

#pragma once

#include <boost/spirit/include/qi.hpp>
#include <cstdint>

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
inline bool str_to_value(const string_type& src, std::int64_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::long_long, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, std::uint64_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::ulong_long, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, std::int32_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::int_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, std::uint32_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::uint_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, std::int16_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::short_, dest);
}

template<typename string_type>
inline bool str_to_value(const string_type& src, std::uint16_t& dest)
{
	namespace qi = boost::spirit::qi;

	return qi::parse(std::cbegin(src), std::cend(src), qi::ushort_, dest);
}
